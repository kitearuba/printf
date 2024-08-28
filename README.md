```markdown
# 🖨️ ft_printf - 42 Project

## Overview
The **ft_printf** project is a reimplementation of the standard `printf()` function in C. This project helps deepen your understanding of variadic functions and gives you control over the low-level formatting of outputs in C. You'll also learn to handle memory allocation and work with the `libft` library.

---

## Features
- Recreates the **`printf()`** function from the C standard library.
- Supports the following conversion specifiers:
  - `%c`: Print a single character.
  - `%s`: Print a string.
  - `%p`: Print a pointer in hexadecimal format.
  - `%d`: Print a decimal (base 10) integer.
  - `%i`: Print an integer.
  - `%u`: Print an unsigned decimal (base 10) number.
  - `%x`: Print a number in lowercase hexadecimal (base 16).
  - `%X`: Print a number in uppercase hexadecimal (base 16).
  - `%%`: Print a literal percentage symbol.

---

## Mandatory Part
The mandatory part of this project requires building a library `libftprintf.a` that contains the `ft_printf()` function, which mimics the behavior of the standard `printf()` function. It uses your **`libft`** library and follows the rules of memory management and formatting strictly.

---

## Project Structure
```
.
├── Makefile
├── include
│   └── ft_printf.h
├── libft
│   ├── libft.h
│   ├── Makefile
│   ├── *.c
│   └── *.o
├── src
│   ├── ft_printf.c
│   ├── handle_char.c
│   ├── handle_string.c
│   ├── handle_pointer.c
│   ├── handle_int.c
│   ├── handle_uint.c
│   ├── handle_hex.c
│   ├── handle_percent.c
│   └── utils.c
└── libftprintf.a
```

### Makefile Targets
- **`make`**: Compiles the `libftprintf.a` library.
- **`make clean`**: Removes object files for both `ft_printf` and `libft`.
- **`make fclean`**: Removes object files and the libraries `libftprintf.a` and `libft.a`.
- **`make re`**: Cleans and recompiles the project from scratch.

---

## Usage

### Including the Library
To use the `ft_printf` in your C projects:
```c
#include "ft_printf.h"
```

### Compilation
1. Clone the repository:
   ```bash
   git clone https://github.com/your-repo/ft_printf.git
   cd ft_printf
   ```
2. Run `make` to compile the `libftprintf.a` library:
   ```bash
   make
   ```
3. Use `libftprintf.a` in your project:
   ```bash
   gcc main.c -L. -lftprintf -o main
   ```

### Example
```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s!\n", "World");
    return 0;
}
```

### Relinking and Dependencies
Both **`libft.a`** and **`libftprintf.a`** are set up in the Makefile to prevent unnecessary relinking. Changes in `libft` or `ft_printf` source files or headers will automatically trigger a rebuild when you run `make` again.

---

## Norm Compliance
The project strictly follows the 42 **Norm** guidelines, ensuring no memory leaks, respecting function limitations, and adhering to naming conventions.

---

## License
This project is part of the 42 School curriculum and is intended for educational purposes.
```
