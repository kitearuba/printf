---

# 🖨️ **ft_printf** - _42 School Project_

![ft_printf](https://img.shields.io/badge/42-Project-blue?style=flat-square)

Welcome to the **ft_printf** project! The goal of this project is to re-implement the well-known `printf()` function in C, providing a deeper understanding of variadic functions, memory management, and handling formatted output.

---

## 📚 **Project Overview**
The **ft_printf** function replicates the functionality of the standard C `printf()` function, allowing formatted output to the standard output. You'll explore the intricacies of working with variable arguments and handling different format specifiers like characters, strings, pointers, and various integer types.

---

## ⚙️ **Features**

- **Custom `printf()` Implementation**: Recreate the standard `printf()` functionality.
- **Supported Format Specifiers**:
  - `%c`: Print a single character.
  - `%s`: Print a string.
  - `%p`: Print a pointer in hexadecimal format.
  - `%d`: Print a signed decimal integer.
  - `%i`: Print a signed decimal integer.
  - `%u`: Print an unsigned decimal integer.
  - `%x`: Print a lowercase hexadecimal number.
  - `%X`: Print an uppercase hexadecimal number.
  - `%%`: Print a literal percentage sign.

---

## 📂 **Project Structure**

The project consists of multiple source and header files, including the **libft** library that is integrated with `ft_printf`. Here's a quick look at the directory structure:

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

---

## 🛠️ **Makefile Usage**

The Makefile provides the following commands:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Compile the `libftprintf.a` library.     |
| `make clean`  | Remove object files.                     |
| `make fclean` | Remove all generated files and libraries.|
| `make re`     | Clean and recompile everything.          |

### 🧹 **Cleaning Targets**:
- **`make clean`**: Deletes object files but keeps the libraries.
- **`make fclean`**: Deletes everything including the libraries.
- **`make re`**: Cleans and recompiles everything from scratch.

---

## 📝 **How to Use**

### 1️⃣ **Include the Header**
To use `ft_printf` in your own project, include the `ft_printf.h` header file:

```c
#include "ft_printf.h"
```

### 2️⃣ **Compile Your Project**
Run the following command to compile the `libftprintf.a` library:

```bash
make
```

### 3️⃣ **Link the Library**
Compile and link with `libftprintf.a`:

```bash
gcc your_program.c -L. -lftprintf -o your_program
```

### 4️⃣ **Example**
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "42");
    return 0;
}
```

---

## 🚀 **Relinking and Dependencies**

The project is configured to ensure **no unnecessary relinking**. If changes are made to any of the source or header files in `libft` or `ft_printf`, the Makefile will automatically detect these changes and recompile the necessary files.

---

## ✅ **Norminette Compliance**

This project follows the 42 **Norm** standards:
- No memory leaks.
- No forbidden functions.
- Properly structured code and filenames.
- Error handling for unexpected behavior.
- Clean and readable code.

---

## 🎯 **Mandatory Part Only**

This project currently includes only the **mandatory part**. The bonus part has not yet been implemented.

---

## 📬 **Conclusion**

The **ft_printf** project is an excellent opportunity to deepen your understanding of the C language and improve your coding practices. By implementing such a widely used function, you'll gain hands-on experience in handling variadic functions and manipulating output formats.

Good luck, and happy coding! 🚀

---

## 👨‍💻 **Author**

**chrrodri** - _42 Barcelona_

---
