---
name: project-life-vault
description: "Life vault Obsidian setup — current state, repos, and what's left to do"
metadata: 
  node_type: memory
  type: project
  originSessionId: 2b487cae-77f6-45fe-a464-d9b58bfe9d24
---

Life vault is fully operational as of 2026-05-18.

**Repos:**
- `~/Life` → github.com/rbagin/life_vault (SSH)
- `~/Life/42` → github.com/rbagin/42_notes (SSH, gitignored by parent)

**What's built:**
- PARA structure (projects/areas/resources/archive)
- 3 agent scripts: sync-graphify.sh, daily-review.sh, upload-to-claude-project.sh
- librarian.sh: audit/index/link/link-file modes for ongoing graph maintenance
- bulk-link.sh: idempotent category-based linker for batch imports
- 158/158 notes linked, 0 orphans
- UvA notes (138 files) imported to resources/university/
- Codam project MOCs (libft, pipex, push_swap, so_long, minishell, cub3d, net_practice) in 42/projects/
- graphify installed via uv, run on cpp_42 and all Codam projects
- Claude.ai Project "Life Vault" created and fed with vault bundle
- GitHub Sync plugin installed in Obsidian (by kevinmkchin, not obsidian-git)
- SSH key: ~/.ssh/id_github, configured in ~/.ssh/config

**What's still missing:**
- First concept note: 42/concepts/orthodox-canonical-form.md
- Re-upload vault bundle to Claude.ai Project (vault grew a lot since first upload)
- cpp_09 ex00 (BitcoinExchange.cpp was open when session ended)

**Why:** Separate repos so Codam school computer only clones 42_notes, not the full personal vault. .gitignore approach chosen over submodules for simplicity.

**How to apply:** When user opens Life vault or asks about notes workflow, reference this state.
