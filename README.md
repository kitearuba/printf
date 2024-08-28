---

# 🖨️ **ft_printf** - _42 School Project_

![ft_printf](https://img.shields.io/badge/42-Project-blue?style=flat-square) ![C Programming](https://img.shields.io/badge/Language-C-brightgreen?style=flat-square) ![Makefile](https://img.shields.io/badge/Build-Makefile-yellow?style=flat-square)

Welcome to the **ft_printf** project! This repository contains the implementation of a custom `printf()` function, a staple of C programming. This project is part of the 42 School curriculum and focuses on **variadic functions**, **memory management**, and **formatted output**.

---

## 📚 **Table of Contents**

1. [📖 Project Overview](#-project-overview)
2. [⚙️ Features](#️-features)
3. [📂 Project Structure](#-project-structure)
4. [🛠️ Makefile Usage](#-makefile-usage)
5. [🚀 How to Use](#-how-to-use)
6. [🔄 Relinking and Dependencies](#-relinking-and-dependencies)
7. [✅ Norm Compliance](#-norm-compliance)
8. [🎯 Mandatory Part Only](#-mandatory-part-only)
9. [🎉 Conclusion](#-conclusion)
10. [👨‍💻 Author](#-author)

---

## 📖 **Project Overview**

The **ft_printf** project replicates the functionality of the standard C `printf()` function, allowing formatted output to the terminal. By handling **variadic arguments** and supporting multiple **format specifiers**, you’ll gain an in-depth understanding of C's capabilities for formatted output. 

---

## ⚙️ **Features**

The `ft_printf` function supports various format specifiers, making it versatile for different types of formatted output:

- **Supported Format Specifiers**:
  - `%c`: Print a single character.
  - `%s`: Print a string.
  - `%p`: Print a pointer in hexadecimal format.
  - `%d` / `%i`: Print a signed decimal integer.
  - `%u`: Print an unsigned decimal integer.
  - `%x`: Print a lowercase hexadecimal number.
  - `%X`: Print an uppercase hexadecimal number.
  - `%%`: Print a literal percentage sign.

---

## 📂 **Project Structure**

The project consists of multiple source and header files, along with the **libft** library, integrated into the `ft_printf` implementation. Here’s a snapshot of the project structure:

```bash
📦 ft_printf
├── 📄 Makefile
├── 📁 include
│   └── 📄 ft_printf.h
├── 📁 libft
│   ├── 📄 libft.h
│   ├── 📄 Makefile
│   └── 📄 [Libft source files...]
├── 📁 src
│   ├── 📄 ft_printf.c
│   ├── 📄 [Additional source files...]
└── 📦 libftprintf.a
```

---

## 🛠️ **Makefile Usage**

The Makefile provides several commands to help with the compilation and management of your project:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Compile the `libftprintf.a` library.     |
| `make clean`  | Remove object files.                     |
| `make fclean` | Remove object files and libraries.       |
| `make re`     | Clean and recompile everything.          |

### 🧹 **Cleaning Targets**

- **`make clean`**: Deletes all `.o` files generated during the build process, but keeps the libraries.
- **`make fclean`**: Deletes both the object files and the compiled library (`libftprintf.a`).
- **`make re`**: Cleans and recompiles the entire project, ensuring all files are up to date.

---

## 🚀 **How to Use**

### 1️⃣ **Include the Header**

To use `ft_printf` in your project, include the `ft_printf.h` header file in your source code:

```c
#include "ft_printf.h"
```

### 2️⃣ **Compile the Library**

Run the following command to compile the `libftprintf.a` library:

```bash
make
```

### 3️⃣ **Link the Library**

To use `libftprintf.a` in your own project, link it during compilation:

```bash
gcc your_program.c -L. -lftprintf -o your_program
```

### 4️⃣ **Example Usage**

Here’s an example showing how to use `ft_printf` in your C program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "42");
    return 0;
}
```

---

## 🔄 **Relinking and Dependencies**

The project is designed to avoid unnecessary relinking. If changes are made to any of the source or header files in the `libft` or `ft_printf` directories, the Makefile will automatically detect these changes and recompile the affected files.

---

## ✅ **Norm Compliance**

The project adheres to the **42 Norm** standards, ensuring:
- **No memory leaks**: Proper memory management and freeing of allocated memory.
- **No forbidden functions**: Only allowed functions are used.
- **Structured code**: Clean, well-organized, and readable code with appropriate error handling.
- **Error-free compilation**: The project compiles without warnings or errors and runs without crashes.

---

## 🎯 **Mandatory Part Only**

Currently, this project includes only the **mandatory part** of the **ft_printf** assignment. The bonus features, such as additional formatting flags, field width, and precision specifiers, have not yet been implemented.

---

## 🎉 **Conclusion**

The **ft_printf** project is an excellent exercise in C programming, particularly for gaining a deeper understanding of **variadic functions**, **formatted output**, and **manual memory management**. Building this library from scratch will equip you with valuable skills that can be applied in more advanced projects down the line.

Good luck, and happy coding! 🚀

---

## 👨‍💻 **Author**

**chrrodri**  
_42 Barcelona_

[GitHub Profile](https://github.com/kitearuba)

---
