---
name: memory-setup-symlink
description: Memory directory is symlinked from the harness path into the cpp_42 repo's .claude/memory/ folder so it syncs across two devices via git.
metadata:
  type: project
---

The user works from two devices and wants their auto-memory to sync between them via git.

**Setup:** The harness's memory directory `~/.claude/projects/-home-rbagin-cpp-42/memory` is a **symlink** pointing to `~/cpp_42/.claude/memory/`. The actual memory files live in the project tree and are version-controlled.

**Why:** Without this, each device would have its own isolated memory and the two would drift apart.

**How to apply:**
- Read/write memory normally — the symlink is transparent.
- If the user mentions setting up on a new device or fresh checkout, they need to run:
  ```bash
  rm -rf ~/.claude/projects/-home-rbagin-cpp-42/memory
  ln -s ~/cpp_42/.claude/memory ~/.claude/projects/-home-rbagin-cpp-42/memory
  ```
- If the harness behaves like memory is empty after a pull on a new device, that's the first thing to check.
- Memory file changes should be committed to git like any other source file.

**History:** Originally lived in `~/cpp_42/claude/` (no dot prefix). Migrated to `~/cpp_42/.claude/memory/` to match Claude Code's standard project-config directory convention. The other device may still have a `claude/` directory that should be deleted after pulling.
