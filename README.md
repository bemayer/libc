# libc
Custom Implementation of Standard C Library Functions

## Overview
This project involves reimplementing a subset of the standard C library functions from scratch. The aim is to gain a deeper understanding of low-level programming, memory management, and the inner workings of fundamental C functions. By writing these functions manually, the project provides insights into how the standard library operates under the hood.

## Features
- **String Manipulation Functions**:
  - `ft_strlen`: Calculate the length of a string.
  - `ft_strcpy`: Copy a string to another.
  - `ft_strncpy`: Copy a specified number of characters from one string to another.
  - `ft_strcat`: Concatenate two strings.
  - `ft_strncat`: Concatenate a specified number of characters from one string to another.
  - `ft_strdup`: Duplicate a string by allocating new memory.
- **Memory Management Functions**:
  - `ft_memset`: Fill a block of memory with a specified value.
  - `ft_memcpy`: Copy memory area.
  - `ft_memmove`: Copy memory areas that may overlap.
  - `ft_memcmp`: Compare memory areas.
  - `ft_memalloc`: Allocate memory and initialize it to zero.
  - `ft_memdel`: Free allocated memory and set the pointer to NULL.
- **Character Checking and Conversion**:
  - `ft_isalpha`: Check for alphabetic characters.
  - `ft_isdigit`: Check for digits.
  - `ft_isalnum`: Check for alphanumeric characters.
  - `ft_isascii`: Check for ASCII characters.
  - `ft_isprint`: Check for printable characters.
  - `ft_toupper`: Convert lowercase letters to uppercase.
  - `ft_tolower`: Convert uppercase letters to lowercase.
- **Input/Output Functions**:
  - `ft_putchar`: Write a character to the standard output.
  - `ft_putstr`: Write a string to the standard output.
  - `ft_putendl`: Write a string followed by a newline to the standard output.
  - `ft_putnbr`: Write an integer to the standard output.
  - `ft_putchar_fd`: Write a character to a file descriptor.
  - `ft_putstr_fd`: Write a string to a file descriptor.
- **Additional Utility Functions**:
  - `ft_atoi`: Convert a string to an integer.
  - `ft_itoa`: Convert an integer to a string.
  - `ft_strsplit`: Split a string into an array of strings based on a delimiter.
  - `ft_strjoin`: Concatenate two strings into a new string.
  - `ft_strtrim`: Remove leading and trailing whitespace from a string.

## Implementation Highlights
- **Manual Memory Management**: All functions handle memory allocation and deallocation explicitly, without relying on external libraries.
- **Robust Error Handling**: Functions include checks for NULL pointers and invalid inputs to prevent segmentation faults and undefined behavior.
- **Standard Compliance**: The behavior of each function closely mimics its standard library counterpart, ensuring familiarity and predictability.
- **Modular Design**: Code is organized into individual files for each function, promoting readability and ease of maintenance.

## Motivation
Rewriting standard library functions serves several educational purposes:
- **Deepen Understanding of C Fundamentals**: Gain practical experience with pointers, memory allocation, and data manipulation at a low level.
- **Enhance Problem-Solving Skills**: Address challenges associated with implementing core functionality without relying on existing libraries.
- **Foundation for Future Projects**: Create a reliable set of utility functions that can be used in other C projects requiring custom implementations.


## How to Build and Use
### Prerequisites
- **C Compiler**: GCC or Clang
- **Make**: Ensure the make utility is installed on your system.

### Cloning the Repository
``` bash
git clone https://github.com/bemayer/libc.git
cd libc
```

### Building the Library
Use the provided Makefile to compile the library:
``` bash
make
```
This command will generate a static library file libft.a containing all the implemented functions.
