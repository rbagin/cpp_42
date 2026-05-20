#!/usr/bin/env bash
# Auto-link the harness memory dir to the shared Codam memory store whenever
# a Claude Code session starts in one of the listed project paths.
#
# Registered as a SessionStart hook in ~/.claude/settings.json.
#
# To share memory with a new Codam project: append its absolute path to
# CODAM_PATHS below. Subdirectories of any listed path are also included.

set -euo pipefail

SHARED_MEMORY="/home/rbagin/cpp_42/.claude/memory"

CODAM_PATHS=(
  "/home/rbagin/cpp_42"
  "/home/rbagin/42_notes"
  "/home/rbagin/webserv"
  # Uncomment to also share memory with the intra exercises:
  # "/home/rbagin/cpp_42_intra"
)

# Pull cwd from the hook's stdin JSON; fall back to $PWD.
HOOK_INPUT="$(cat 2>/dev/null || true)"
CWD=""
if [ -n "$HOOK_INPUT" ] && command -v jq >/dev/null 2>&1; then
  CWD="$(printf '%s' "$HOOK_INPUT" | jq -r '.cwd // empty' 2>/dev/null || true)"
fi
[ -z "$CWD" ] && CWD="${PWD:-}"
[ -z "$CWD" ] && exit 0

matched=0
for p in "${CODAM_PATHS[@]}"; do
  case "$CWD" in
    "$p"|"$p"/*) matched=1; break ;;
  esac
done
[ "$matched" = "0" ] && exit 0

# The harness encodes cwd by replacing '/' and '_' with '-'.
ENCODED="$(printf '%s' "$CWD" | sed 's|[/_]|-|g')"
PROJECT_DIR="$HOME/.claude/projects/$ENCODED"
MEM_LINK="$PROJECT_DIR/memory"

mkdir -p "$PROJECT_DIR"

if [ -L "$MEM_LINK" ] && [ "$(readlink "$MEM_LINK")" = "$SHARED_MEMORY" ]; then
  exit 0
fi

if [ -d "$MEM_LINK" ] && [ ! -L "$MEM_LINK" ]; then
  # Only replace if empty — never clobber data we don't know about.
  if [ -z "$(ls -A "$MEM_LINK" 2>/dev/null)" ]; then
    rmdir "$MEM_LINK"
  else
    exit 0
  fi
fi

if [ -L "$MEM_LINK" ]; then
  rm "$MEM_LINK"
fi

ln -s "$SHARED_MEMORY" "$MEM_LINK"
