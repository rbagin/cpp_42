# Obsidian + Graphify Knowledge Base — Setup Plan

A personal "second brain" for everything you're learning in the 42 cpp modules,
synced between your home laptop and the Codam school computer, with graphify
output feeding into it automatically.

---

## 1. Goals

1. **One place** to keep every C++ concept you've learned, in your own words,
   organized and cross-linked.
2. **Graphify integration** — the wiki output from `graphify-out/wiki/` (one
   file per concept, already wiki-linked) lives inside the same vault, so you
   can navigate from your own notes into the auto-generated concept map.
3. **Two-machine sync** — work on the laptop at home, push, pull at Codam the
   next day (or vice versa). Survive Codam's session resets.
4. **Zero recurring cost** — git as the sync layer, no Obsidian Sync
   subscription needed.

---

## 2. Architecture overview

```
                  ┌──────────────────────────────┐
                  │  GitHub (private repo)       │
                  │  rbagin/42-notes             │  ← single source of truth
                  └──────────┬───────────────────┘
                             │  git push / pull
              ┌──────────────┴──────────────┐
              ▼                             ▼
   ┌────────────────────┐         ┌────────────────────┐
   │  Home laptop       │         │  Codam Mac         │
   │  ~/42-notes/       │         │  ~/42-notes/       │
   │  (Obsidian vault)  │         │  (Obsidian vault)  │
   └────────────────────┘         └────────────────────┘
              ▲                             ▲
              │ rsync graphify-out/wiki/    │ rsync graphify-out/wiki/
              │                             │
   ┌────────────────────┐         ┌────────────────────┐
   │  cpp_42 repo       │         │  cpp_42 repo       │
   │  graphify-out/     │         │  graphify-out/     │
   └────────────────────┘         └────────────────────┘
```

Key idea: the **vault is its own repo**, and graphify wiki output is
*copied in* by a small script — graphify owns its files, you own yours,
and there's no symlink fragility across machines.

---

## 3. Vault layout

```
42-notes/                          ← Obsidian vault root + git repo root
├── .obsidian/                     ← Obsidian config (themes, plugins, hotkeys)
│   └── ...                         (committed, so both machines match)
├── .gitignore
├── README.md
│
├── 00-index/
│   └── Home.md                    ← landing page, links to module MOCs
│
├── modules/                       ← your own notes, per cpp module
│   ├── cpp_00.md
│   ├── cpp_01.md
│   ├── ...
│   └── cpp_09.md
│
├── concepts/                      ← your own concept notes (your words)
│   ├── orthodox-canonical-form.md
│   ├── deep-vs-shallow-copy.md
│   ├── templates.md
│   ├── exceptions.md
│   └── ...
│
├── graphify/                      ← auto-generated, treat as read-only
│   ├── wiki/                      ← copied from cpp_42/graphify-out/wiki/
│   └── GRAPH_REPORT.md            ← copied from cpp_42/graphify-out/
│
└── scripts/
    └── sync-graphify.sh           ← see section 6
```

Why this split: your handwritten notes are what you'll actually study from
(active recall). The graphify folder is a reference layer — when you write
about templates in `concepts/templates.md`, you can link to
`[[graphify/wiki/templates|generated map]]` to pivot into the auto-extracted
relationships.

---

## 4. Initial setup — do this on the home laptop first

### 4.1 Install Obsidian
- Linux: AppImage from obsidian.md, or `flatpak install flathub md.obsidian.Obsidian`
- macOS (for later, at Codam): `.dmg` from obsidian.md. If you can't install
  to `/Applications` on Codam, the `.dmg` contents can run from `~/`.

### 4.2 Create the vault repo locally
```bash
mkdir -p ~/42-notes
cd ~/42-notes
git init -b main
```

### 4.3 Open it as an Obsidian vault
- Obsidian → "Open folder as vault" → `~/42-notes`
- This creates the `.obsidian/` config folder.

### 4.4 Configure `.gitignore`
Create `~/42-notes/.gitignore`:
```gitignore
# Obsidian per-machine state — DO NOT sync
.obsidian/workspace.json
.obsidian/workspace-mobile.json
.obsidian/cache
.obsidian/plugins/*/data.json   # plugin per-machine data, optional

# OS junk
.DS_Store
Thumbs.db

# Editor swap files
*.swp
*.swo
```

Everything else under `.obsidian/` *is* committed — that's how both machines
get the same theme, hotkeys, and plugin set automatically.

### 4.5 Pick a minimal set of plugins (core + community)
**Core plugins to enable** (Settings → Core plugins):
- Graph view
- Backlinks
- Outgoing links
- Tags pane
- Templates
- Daily notes (useful for "what did I learn today" entries)

**Community plugins worth installing** (Settings → Community plugins):
- **Dataview** — query notes like a database (e.g. "show all concepts tagged #cpp_05")
- **Templater** — better templates than the core one
- **Git** (obsidian-git) — auto-commit + auto-pull on schedule, less terminal work

That's it. Resist adding more until you feel friction.

### 4.6 First commit
```bash
cd ~/42-notes
git add .
git commit -m "Initial Obsidian vault"
```

### 4.7 Push to GitHub
1. Create a **private** repo on github.com named `42-notes` (no README, no .gitignore — empty).
2. Link and push:
```bash
git remote add origin git@github.com:rbagin/42-notes.git
git push -u origin main
```

---

## 5. Codam school computer setup

The Codam Mac may reset your home directory between sessions, so this is
your "every morning" routine the first time you sit down at a school machine:

### 5.1 One-time per session (or per machine if persistent)
```bash
# clone the vault
cd ~
git clone git@github.com:rbagin/42-notes.git

# clone cpp_42 too if not already there
git clone git@github.com:rbagin/cpp_42.git
```

If SSH keys don't persist between Codam sessions, generate a new one and
add it to GitHub each morning, or use a Personal Access Token over HTTPS.

### 5.2 Open Obsidian → Open folder as vault → `~/42-notes`
All your plugins, theme, hotkeys load automatically because `.obsidian/` is
in git.

### 5.3 At end of session
```bash
cd ~/42-notes
git add -A
git commit -m "Notes from $(date +%Y-%m-%d) at Codam"
git push
```

Or rely on the obsidian-git plugin to auto-commit every N minutes.

---

## 6. Graphify → Obsidian pipeline

Goal: keep `graphify-out/wiki/` from your `cpp_42` repo mirrored into
`~/42-notes/graphify/wiki/` so Obsidian can see and link to it.

### 6.1 Make a sync script

Create `~/42-notes/scripts/sync-graphify.sh`:
```bash
#!/usr/bin/env bash
# Mirror graphify output from cpp_42 into the vault.
# Usage: ./scripts/sync-graphify.sh [path-to-cpp_42]

set -euo pipefail

CPP42="${1:-$HOME/cpp_42}"
VAULT_DIR="$(cd "$(dirname "$0")/.." && pwd)"

if [[ ! -d "$CPP42/graphify-out" ]]; then
  echo "graphify-out/ not found in $CPP42 — run 'graphify update .' first." >&2
  exit 1
fi

mkdir -p "$VAULT_DIR/graphify"
rsync -a --delete \
  "$CPP42/graphify-out/wiki/" \
  "$VAULT_DIR/graphify/wiki/"

# Top-level report, if it exists
[[ -f "$CPP42/graphify-out/GRAPH_REPORT.md" ]] && \
  cp "$CPP42/graphify-out/GRAPH_REPORT.md" "$VAULT_DIR/graphify/"

echo "Synced graphify output into vault."
```

Then:
```bash
chmod +x ~/42-notes/scripts/sync-graphify.sh
```

### 6.2 The everyday loop
1. Work on a `cpp_XX/exYY` exercise.
2. When you finish: `graphify update .` (you already do this — it's in CLAUDE.md).
3. `~/42-notes/scripts/sync-graphify.sh` — pulls the new graphify files in.
4. In Obsidian, open the new wiki entry and write your own summary in
   `concepts/<topic>.md`, linking back: `See also [[graphify/wiki/<topic>]]`.
5. Commit + push the vault.

### 6.3 Optional: one command for the whole loop
Add a wrapper script in cpp_42 (e.g. `~/cpp_42/scripts/study.sh`) that runs
`graphify update .` and then calls the vault's sync script. Keeps everything
one command.

---

## 7. Note-taking conventions (your handwritten notes)

A small set of conventions keeps the graph view useful instead of a hairball.

### 7.1 Note template — `concepts/<topic>.md`
```markdown
---
tags: [cpp_XX, concept]
module: cpp_05
status: learning      # learning | solid | needs-review
---

# <Topic>

## What it is
One paragraph in your own words.

## Why it matters
What problem does it solve? When is it used in real code?

## How it works
The mechanics. Code-shape only (you're learning — don't paste solutions).

## Gotchas
What tripped you up. Compiler errors you actually saw.

## Related
- [[other-concept]]
- [[graphify/wiki/<topic>]]   ← link to the generated map

## Career relevance
One line on where this shows up in industry C++.
```

### 7.2 Module MOC — `modules/cpp_05.md`
"MOC" = Map of Content. One per module:
```markdown
# cpp_05 — Exceptions

## Exercises
- ex00 — [[bureaucrat]]
- ex01 — [[forms-basic]]
- ex02 — [[forms-and-targets]]
- ex03 — [[intern]]

## Concepts introduced
- [[exceptions]]
- [[custom-exception-classes]]
- [[exception-hierarchy]]
```

### 7.3 Tags
Use sparingly. Suggested core set:
- `#cpp_00` … `#cpp_09` — module
- `#concept`, `#exercise`, `#gotcha`, `#review`
- `#career` — concepts you want to be fluent in for interviews

---

## 8. Backup and recovery

- GitHub is your primary backup (the private repo).
- Local: Obsidian has built-in file recovery (Settings → File recovery), keeps
  every 5 minutes for 7 days. Leave on.
- If you ever break the `.obsidian/` config, you can `git checkout` it back.

---

## 9. What to do *first* when you get home

A short, ordered checklist so you can hit the ground running:

1. [ ] Install Obsidian on the laptop.
2. [ ] `mkdir ~/42-notes && cd ~/42-notes && git init -b main`
3. [ ] Open as vault in Obsidian.
4. [ ] Create `.gitignore` from section 4.4.
5. [ ] Enable core plugins (4.5).
6. [ ] Install community plugins: Dataview, Templater, obsidian-git.
7. [ ] Create the folder layout from section 3 (empty folders + placeholder `Home.md`).
8. [ ] Create the sync script from section 6.1 and run it once.
9. [ ] Write your first real note (suggest: `concepts/orthodox-canonical-form.md` —
       you've already covered it heavily).
10. [ ] Create private `42-notes` repo on GitHub, push.
11. [ ] Verify obsidian-git plugin auto-commit works.

Each step is small. Don't try to backfill every concept you've already learned
on day one — fill notes as you encounter them again, that's the active-recall
loop.

---

## 10. Open decisions (defer until you've used it for a week)

- **Same repo as `cpp_42`?** Currently the plan keeps them separate. If you
  find you only ever update both together, you could merge — but separate
  lets you make the notes repo public later (without exposing school code)
  if you ever want to share study material.
- **Obsidian Sync subscription?** $10/month, gives you real-time sync and
  mobile. Worth it only if git-push friction starts blocking you. The git
  flow is fine for desk-to-desk.
- **Mobile?** Obsidian's mobile apps work, but mobile + git is awkward.
  Skip until you actually want to read notes on your phone.

---

## Career relevance

The Obsidian + git + plain-markdown stack is the same "personal knowledge
management" pattern used by a lot of senior engineers — Andy Matuschak's
notes, "second brain" methodology, etc. Markdown is the universal portable
format: nothing here is locked into Obsidian, so if you ever switch tools
(Logseq, Foam in VS Code, plain `grep`), your work survives. The discipline
of writing concepts in your own words and linking them is exactly how
tech-lead-tier engineers stay current across many codebases — they don't
rely on remembering, they rely on a searchable external memory.
