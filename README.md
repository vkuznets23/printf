# ft_printf

## Overview
This project replicates the functionality of the C standard library function `printf`. It is designed for use in environments where the standard library might not be available or as an exercise in understanding the underlying mechanics of formatted output in C

## Table of Contents
- [Features](#features)
- [Function Prototype](#function-prototype)
- [Supported Format Specifiers](#supported-format-specifiers)
- [How to use](#how-to-use)
- [Getting started](#getting-started)

## Features

- Supports a variety of format specifiers (`%d`, `%s`, `%c`, etc.).
- Handles variable argument lists using `stdarg.h`.
- Robust error handling.
- Clean and efficient implementation, adhering to coding standards.

- ### Function Prototype
```c
int ft_printf(const char *format, ...);
```

- **Parameters:**
  - `format`: A string that specifies the output format. It may include plain text and format specifiers.
  - `...`: Variable arguments corresponding to the format specifiers in the format string.
 
## Supported Format Specifiers
|Format   | Description  |
|`%c`     |  Print a single character |
|`%s`     |  Print a string |
|`%d`/`%i`  |  Print a signed decimal integer |
|`%u`     |   Print an unsigned decimal integer |
|`%x`     |   Print a number in lowercase hexadecimal |
|`%X`     |   Print a number in uppercase hexadecimal |
|`%%`     |   Print a literal % character  |
|`%p`     |   	Print a pointer address  |

