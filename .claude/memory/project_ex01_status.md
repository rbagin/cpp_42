---
name: project-ex01-status
description: "cpp_08 ex01 Span — current status and what's left before it's done"
metadata: 
  node_type: memory
  type: project
  originSessionId: cf8e83e8-207c-4512-95e7-f9cea6805ad7
---

ex01 (Span) is mostly complete. Still needs before it's done:

- Add exception tests to main.cpp: one triggering "Span is full" (addNumber beyond capacity) and one calling shortestSpan/longestSpan with fewer than 2 numbers stored
- Then compile and verify output matches subject example: shortestSpan = 2, longestSpan = 14

**Why:** Evaluators will test exception cases — missing them loses points.
**How to apply:** When resuming ex01, start by adding exception tests to main.cpp, then move on to ex02.
