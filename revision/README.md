# Revision Tracker

This folder is a **manual layer on top of the NeetCode auto-sync**. It does not
touch `Data Structures & Algorithms/` (NeetCode owns that folder and will keep
auto-committing to it), so this can never conflict with sync.

- `README.md` (this file) — master tracking table, grouped by pattern
- `notes/<problem>.md` — one file per problem: approach, gotchas, complexity
- `weak-list.md` — running list of problems to redo before an interview

## How to use this day-to-day

1. Solve/revisit a problem on NeetCode as usual (sync still works normally).
2. Update its row below: **Last Done**, **Confidence**, **Next Review**.
3. If confidence is 🔴 or 🟡, jot 3–4 lines in `notes/<problem>.md` — why it was
   hard, the trick you missed. Future-you reads this instead of re-deriving
   the whole solution from scratch.
4. Before interviews, only redo what's in `weak-list.md` instead of all
   problems.

**Next Review spacing** (simple spaced repetition): 1st review ~1 week after
solve, 2nd review ~3 weeks after that if confidence was 🟢, sooner if 🟡/🔴.

**Confidence key:** 🟢 solid, could solve in an interview cold · 🟡 solved but
shaky/slow · 🔴 struggled or needed hints

---

## Tracking Table

### Arrays & Hashing

| Problem | Pattern | Difficulty | Last Done | Confidence | Next Review |
|---|---|---|---|---|---|
| [Duplicate Integer](../Data%20Structures%20%26%20Algorithms/duplicate-integer) | Hashing | Easy | 2026-06-30 | 🟡 | 2026-07-07 |
| [Majority Element](../Data%20Structures%20%26%20Algorithms/majority-element) | Boyer-Moore Voting | Medium | 2026-06-28 | 🟡 | 2026-07-05 |
| [Majority Element II](../Data%20Structures%20%26%20Algorithms/majority-element-ii) | Boyer-Moore Voting | Medium | 2026-07-02 | 🟡 | 2026-07-09 |
| [Top K Elements in List](../Data%20Structures%20%26%20Algorithms/top-k-elements-in-list) | Heap / Bucket Sort | Medium | 2026-07-02 | 🟡 | 2026-07-09 |
| [Subarray Sum Equals K](../Data%20Structures%20%26%20Algorithms/subarray-sum-equals-k) | Prefix Sum + Hashing | Medium | 2026-07-02 | 🟡 | 2026-07-09 |

### Two Pointers

| Problem | Pattern | Difficulty | Last Done | Confidence | Next Review |
|---|---|---|---|---|---|
| [Two Integer Sum II](../Data%20Structures%20%26%20Algorithms/two-integer-sum-ii) | Two Pointers (sorted) | Medium | 2026-06-30 | 🟢 | 2026-07-21 |
| [Three Integer Sum](../Data%20Structures%20%26%20Algorithms/three-integer-sum) | Two Pointers | Medium | 2026-06-30 | 🟡 | 2026-07-07 |
| [Merge Sorted Array](../Data%20Structures%20%26%20Algorithms/merge-sorted-array) | Two Pointers (back-fill) | Easy | 2026-06-29 | 🟢 | 2026-07-20 |
| [Remove Duplicates from Sorted Array](../Data%20Structures%20%26%20Algorithms/remove-duplicates-from-sorted-array) | Two Pointers (in-place) | Easy | 2026-06-29 | 🟢 | 2026-07-20 |
| [Remove Element](../Data%20Structures%20%26%20Algorithms/remove-element) | Two Pointers (in-place) | Easy | 2026-06-28 | 🟢 | 2026-07-19 |
| [Reverse String](../Data%20Structures%20%26%20Algorithms/reverse-string) | Two Pointers | Easy | 2026-06-28 | 🟢 | 2026-07-19 |

### Sorting

| Problem | Pattern | Difficulty | Last Done | Confidence | Next Review |
|---|---|---|---|---|---|
| [Sort an Array](../Data%20Structures%20%26%20Algorithms/sort-an-array) | Merge/Quick Sort | Medium | 2026-06-29 | 🟡 | 2026-07-06 |
| [Sort Colors](../Data%20Structures%20%26%20Algorithms/sort-colors) | Dutch National Flag | Medium | 2026-06-29 | 🟡 | 2026-07-06 |

### Arrays & Hashing (Hash Map Sum)

| Problem | Pattern | Difficulty | Last Done | Confidence | Next Review |
|---|---|---|---|---|---|
| [Two Integer Sum](../Data%20Structures%20%26%20Algorithms/two-integer-sum) | Hashing (one-pass) | Easy | 2026-06-30 | 🟢 | 2026-07-21 |

---

*Fill in Confidence/Next Review honestly as you go — dates above are seeded
from git history and Confidence is set to 🟡 as a neutral starting point where
unknown. Update on your next pass.*
