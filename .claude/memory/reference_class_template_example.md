---
name: Class template example — Pair<T>
description: Teaching example for class templates using Pair<T>; used to explain cpp_07 ex02 Array without giving away the answer
type: reference
originSessionId: 586a4069-fd67-4fb2-bf09-f4feb0cfe3bc
---
Used the `Pair<T>` class as the teaching example for class templates. It holds exactly two values of the same type T, demonstrates:
- `template <typename T>` on the class declaration
- T as member variable type
- Constructor, copy constructor, assignment operator
- Methods returning T
- The .hpp / .tpp split pattern (why templates can't go in .cpp)

It is clearly structurally different from Array<T> (fixed 2 elements, no dynamic allocation, no operator[], no size()) so it cannot be cargo-culted as a solution.
