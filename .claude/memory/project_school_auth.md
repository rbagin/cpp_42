---
name: project-school-auth
description: At Codam, GitHub auth works via VS Code account integration — no SSH key setup needed
metadata:
  type: project
---

At the Codam school computer, GitHub is already authenticated through VS Code's
built-in account integration. Cloning/pushing the `42_notes` repo works without
any `~/.ssh/` setup.

**Open question:** whether `~/.ssh/` actually survives logout at Codam. The original
SCHOOL_SETUP.md assumed home was wiped each session, but this may not be true.
Worth verifying on the next session — if SSH persists, the keygen/USB fallback
in SCHOOL_SETUP.md is dead weight.

**Why:** Avoid wasting session time on SSH setup that isn't needed.
**How to apply:** When user arrives at school, skip the SSH steps and go straight
to the memory-symlink step. Only fall back to SSH if VS Code GitHub auth fails.

Related: [[project-school-symlink]]
