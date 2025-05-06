# 🔧 custom-malloc — A Minimal Memory Allocator in C

A `malloc`/`free` implementation from scratch, written in C using `sbrk()` system calls.
Built as part of my systems programming journey after reading CS:APP and K&R.

---

## 🚀 Features

- `malloc()`, `free()`, and `realloc()` implemented from scratch
- First-fit allocation strategy
- Coalescing adjacent free blocks
- Internal metadata and block headers
- Heap visualizer (CLI-based)

---

## 📁 Project Structure

custom-malloc/
├── include/
│ └── my_malloc.h
├── src/
│ ├── my_malloc.c
│ └── utils.c
├── tests/
│ └── test_cases.c
├── heap_visualizer/
│ └── viz.c
└── README.md


---

## 📸 Demo

```bash
$ gcc -o demo tests/test_cases.c src/my_malloc.c -Iinclude
$ ./demo

[+] Allocating 128 bytes...
[+] Allocating 64 bytes...
[+] Freeing first block...
[✓] All test cases passed!

📚 Learning Goals

    Understand how memory allocation works at the OS level

    Practice working with raw pointers and memory layout

    Build reusable systems code with test cases and headers

🛠️ Build & Run

make
./demo

Or compile manually:

gcc -o demo tests/test_cases.c src/my_malloc.c -Iinclude

💡 TODO / Future Work

    Add best-fit and worst-fit strategies

    Implement thread-safe malloc using pthread_mutex

    Add support for calloc()

🧠 Inspired By

    CS:APP - Computer Systems: A Programmer’s Perspective

    [K&R - The C Programming Language]

    Various malloc implementations from Linux, BSD, and blogs

👤 Author

Zubair
Student @ Kardan University | Systems Explorer | 🧵 malloc whisperer


---

## 🧼 Summary of a Clean README:
- Starts with a **short project summary**
- Shows **what it does**, not just how
- Breaks down the **file structure** (no confusion)
- Includes **demo / how to run**
- Mentions **goals, learnings, or future work**
- Gives it a **bit of personality**

---
