---
name: Always make fclean after testing
description: After building and running tests, always run `make fclean` to remove object files and binaries before reporting completion.
type: feedback
originSessionId: 1de7ad76-da08-4e9d-a370-5b7ef4d1c0b9
---
After running `make` and testing a binary in any cpp_42 module exercise, always run `make fclean` (or equivalent) to clean up build artifacts before considering the task done.

**Why:** User wants the working tree clean — leftover `.o` files and binaries clutter the directory and can end up committed by accident.

**How to apply:** Whenever I run `make` / `./binary` to verify code in a cpp_42 exercise folder, follow up with `make fclean` in the same exercise directory. Do it as part of the same flow, not as a separate task that the user has to ask for.
