---
name: project-school-symlink
description: Symlink Claude's per-project memory dir to the repo's .claude/memory so memory syncs via git
metadata:
  type: project
---

Memory lives in `.claude/memory/` inside the `42_notes` git repo. For Claude Code
to pick it up, the per-project path under `~/.claude/projects/` must symlink to it.

**Path-hash rule:** Claude Code derives the project dir from the working directory
by replacing `/` and `_` with `-` and keeping the leading dash.

- `/home/rbagin/42_notes`            → `~/.claude/projects/-home-rbagin-42-notes/`
- `/home/ravi-bagin/Life/42`         → `~/.claude/projects/-home-ravi-bagin-Life-42/`
- `/home/ravi-bagin/codam/cpp_42`    → `~/.claude/projects/-home-ravi-bagin-codam-cpp-42/`

At home (user `ravi-bagin`), three working dirs all symlink to the same memory.
At Codam (user `rbagin`), only `42_notes` is cloned and only one symlink is needed.

Command (works for either machine):

```bash
REPO="$HOME/42_notes"   # or wherever the repo is cloned
PROJECT_HASH=$(echo -n "$REPO" | tr '/_' '--')   # leading dash kept
mkdir -p "$HOME/.claude/projects/$PROJECT_HASH"
ln -sfn "$REPO/.claude/memory" "$HOME/.claude/projects/$PROJECT_HASH/memory"
```

If a *real* (non-symlink) `memory/` directory already exists at the target, `rmdir`
it first — `ln -sfn` won't replace a directory.

**Why:** Memory syncs via git rather than manual copying. Memories written at school
are committed and pulled at home automatically.
**How to apply:** Run the snippet above on any fresh machine before starting
`claude` in `~/42_notes`. The full guided version lives in `SCHOOL_SETUP.md`.

Related: [[project-school-auth]]
