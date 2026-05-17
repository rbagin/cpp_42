---
name: Use -std=c++20 in all cpp_42 Makefiles
description: When creating or modifying any Makefile in cpp_42, the CFLAGS must include `-std=c++20`.
type: feedback
originSessionId: 1de7ad76-da08-4e9d-a370-5b7ef4d1c0b9
---
Every Makefile in cpp_42 should compile with `-std=c++20`. Default CFLAGS pattern:

```
CFLAGS = -Wall -Wextra -Werror -std=c++20
```

**Why:** Codam doesn't enforce C++98 (see project memory). User picked C++20 as the "newest stable" version — it's been mature for 5+ years and offers concepts, ranges, designated initializers, the spaceship operator, etc., while still being universally supported by modern GCC/Clang.

**How to apply:** Whenever I write a new Makefile, modify an existing one, or scaffold a new exercise in cpp_42, ensure `-std=c++20` is in CFLAGS. If I see CFLAGS without it, add it (don't ask first — it's the established standard for this project).
