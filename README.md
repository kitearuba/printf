---

# 🖨️ **ft_printf** - _42 School Project_

![ft_printf](https://img.shields.io/badge/42-Project-blue?style=flat-square) ![C Programming](https://img.shields.io/badge/Language-C-brightgreen?style=flat-square) ![Makefile](https://img.shields.io/badge/Build-Makefile-yellow?style=flat-square)

Welcome to the **ft_printf** project! This project is part of the 42 School curriculum and challenges you to re-implement the well-known `printf()` function in C. This project is a great way to strengthen your understanding of **variadic functions**, **memory management**, and **formatted output** handling.

---

## 📖 **Project Overview**

The goal of **ft_printf** is to replicate the functionality of the standard C `printf()` function. You'll implement support for multiple format specifiers and handle different data types with **variadic arguments**. This project is an excellent opportunity to dive deeper into C and gain a better understanding of how formatting works at a low level.

---

## 🛠️ **Features**

- **Custom `printf()` Implementation**: Mimic the standard `printf()` with your own function.
- **Supported Format Specifiers**:
  - `%c` → Print a single character.
  - `%s` → Print a string.
  - `%p` → Print a pointer in hexadecimal format.
  - `%d` → Print a signed decimal integer.
  - `%i` → Print a signed decimal integer.
  - `%u` → Print an unsigned decimal integer.
  - `%x` → Print a lowercase hexadecimal number.
  - `%X` → Print an uppercase hexadecimal number.
  - `%%` → Print a literal percentage symbol.

---

## 📂 **Project Structure**

The project consists of multiple source and header files, along with the **libft** library that integrates with `ft_printf`. Below is a snapshot of the project structure:

```
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

- **`Makefile`**: Manages compilation, cleaning, and relinking of the project.
- **`include/ft_printf.h`**: Header file containing function prototypes and includes.
- **`libft`**: Contains your custom implementation of the libft library.
- **`src/ft_printf.c`**: The main source file implementing `ft_printf()` and related helper functions.
- **`libftprintf.a`**: The final compiled library that you can link to other C projects.

---

## 🛠️ **Makefile Usage**

The Makefile provides a set of commands to simplify the compilation and management of your project:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Compile the `libftprintf.a` library.     |
| `make clean`  | Remove object files but keep the libraries.|
| `make fclean` | Remove all generated files, including the libraries.|
| `make re`     | Clean and recompile everything from scratch.|

### 🧹 **Cleaning Targets**:
- **`make clean`**: Removes all `.o` object files from the project directories.
- **`make fclean`**: Removes object files and the generated library (`libftprintf.a`).
- **`make re`**: Cleans and recompiles everything, ensuring all files are up to date.

---

## 🚀 **How to Use**

### 1️⃣ **Include the Header**

To use `ft_printf` in your project, include the `ft_printf.h` header file:

```c
#include "ft_printf.h"
```

### 2️⃣ **Compile the Library**

To compile the `libftprintf.a` library, simply run:

```bash
make
```

### 3️⃣ **Link the Library**

To compile your own project with `libftprintf.a`, link it during compilation like so:

```bash
gcc your_program.c -L. -lftprintf -o your_program
```

This will link the compiled `libftprintf.a` library with your project.

### 4️⃣ **Example Usage**

Here’s a simple example demonstrating how to use `ft_printf` in your program:

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

The project is designed to **avoid unnecessary relinking**. The Makefile is configured to detect any changes in the source or header files within the `libft` and `ft_printf` directories, ensuring that only the necessary files are recompiled.

---

## ✅ **Norm Compliance**

This project follows the **42 Norm** standards, ensuring:
- **No memory leaks**: Proper handling and freeing of allocated memory.
- **No forbidden functions**: Only allowed functions are used.
- **Clean and structured code**: Proper formatting, error handling, and file organization.
- **Error-free compilation**: No warnings, errors, or crashes during runtime (as per the Norm).

---

## 🎯 **Mandatory Part Only**

At present, this project includes only the **mandatory part**. Future work may expand the project to include bonus functionality such as additional formatting flags, field widths, precision, and more.

---

## 🎉 **Conclusion**

The **ft_printf** project is an excellent opportunity to enhance your C programming skills and delve deeper into the mechanics of variadic functions and formatted output handling. By building this library from scratch, you’ll develop a strong foundation for future projects that require custom formatted output.

Good luck with your journey through the 42 curriculum, and happy coding! 🚀

---

## 👨‍💻 **Author**

**chrrodri**  
_42 Barcelona_

[GitHub Profile](https://github.com/yourusername)

---🚡
