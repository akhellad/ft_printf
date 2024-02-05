# ft_printf Project at 42 School

## Introduction

Welcome to my ft_printf project, a challenging yet rewarding assignment from the 42 School curriculum. This project aims to mimic the famous C standard library function, `printf`. Recreating this function from scratch allowed me to deeply understand variadic functions in C, string parsing, and the intricacies of different data type representations in programming. It was a significant step in enhancing my C programming skills, offering a comprehensive understanding of a function that's widely used in software development.

## Project Overview

The goal of ft_printf was not just to replicate the `printf` function but to expand my ability to work with complex functions involving variable numbers of arguments. My version of `ft_printf` supports several format specifiers, including `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

- **`%c`** prints a single character.
- **`%s`** prints a string.
- **`%p`** prints a pointer's address in hexadecimal format.
- **`%d`** and **`%i`** print a signed decimal integer.
- **`%u`** prints an unsigned decimal integer.
- **`%x`** and **`%X`** print a number in hexadecimal format (lowercase and uppercase, respectively).
- **`%%`** prints a percent sign.

## Technical Details

- **Language**: The project is entirely written in C, adhering to the Norm of 42 School.
- **Compilation**: Compiled with gcc and flags `-Wall -Wextra -Werror`.
- **Code Structure**: The code is structured into modular files, each handling different aspects of the `printf` functionality, and is located in the `srcs` directory. Header files are in the `includes` directory.

## How to Use ft_printf in Your Projects

1. Clone this repository to your local machine.
2. Compile the library by running `make` in the root directory. This will create a `libftprintf.a` library file.
3. Include the `ft_printf.h` header file in your C project files where you want to use `ft_printf`.
4. Compile your project with `libftprintf.a`, ensuring to include the `-L` flag to specify the library path and `-lftprintf` to link against `ft_printf`.
5. Now, you can use `ft_printf` as you would the standard `printf` function.

## Sample Usage

```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s!", "world");
    return (0);
}

## Author

- Ahmed Khelladi - Student at 42 School
