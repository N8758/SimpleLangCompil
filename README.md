# SimpleLang Compiler

This project implements a basic compiler for a toy language called SimpleLang. It includes a lexer, parser, and code generator that converts SimpleLang code to a hypothetical assembly language.

## Directory Structure


## How to Build and Run

### Prerequisites

1. Install GCC (or any C compiler).
2. Install Visual Studio Code with necessary extensions (e.g., Code Runner, C/C++).

### Steps

1. **Clone the Repository**
   ```bash
   git clone <repository-url>
   cd SimpleLangCompiler
   
  
---

### **Final Steps: How to Run**

1. **Set up the folder structure** as outlined above.
2. Copy the provided codes into their respective files.
3. Use the following commands to compile and run:
   - Compile:
     ```bash
     gcc src/*.c -o build/simplelang_compiler
     ```
   - Run with test cases:
     ```bash
     ./build/simplelang_compiler tests/test1.slang
     ```
   - Expected Output (for `test1.slang`):
     ```
     PUSH 10
     LOAD x
     PUSH 20
     LOAD y
     ADD
     LOAD z
     ```

Let me know if you need help refining any part!
