---
name: Codam C++ standard policy
description: Codam (user's 42 campus) does not enforce C++98 — user uses C++20 instead in all Makefiles for cpp_42 work.
type: project
originSessionId: 1de7ad76-da08-4e9d-a370-5b7ef4d1c0b9
---
Codam does not enforce the official 42 C++98 requirement for the C++ piscine modules.

**Why:** User explicitly stated this is the case at their campus. The standard 42 subject says "compile with C++98" but evaluators at Codam don't penalize using a newer standard.

**How to apply:** All Makefiles for cpp_42 module work should use `-std=c++20`. Don't add `-std=c++98` and don't worry about C++98-specific compatibility (e.g., `nullptr` is fine, range-for is fine, `auto` is fine, lambdas are fine, in-class member initializers are fine). When writing or reviewing Makefiles in any cpp_42 module (cpp_00 through cpp_09), expect/add `-std=c++20` in CFLAGS.
