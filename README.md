# LIBFT

# 📘 Libft: Your First C Library
Libft is one of the initial projects at **42 School**, designed to help students create their own function library in **C**, replacing many standard utilities from `<string.h>`, `<stdlib.h>`, and `<ctype.h>`.

## ✨ Project Objective
The purpose of **Libft** is to strengthen your understanding of the C language fundamentals, particularly memory manipulation, string handling, and data conversion. Throughout this project, you will implement custom versions of essential functions that will be useful in future developments.

## 🔧 Implemented Features

### 📏 String Manipulation
These functions allow you to handle and modify strings:

- `ft_strlen` → Returns the length of a string.
- `ft_strcpy`, `ft_strncpy` → Copies a string into another.
- `ft_strdup` → Creates a duplicate of a string in dynamic memory.
- `ft_strcat`, `ft_strncat` → Concatenates two strings.
- `ft_strchr`, `ft_strrchr` → Searches for a character within a string.
- `ft_strcmp`, `ft_strncmp` → Compares two strings.
- `ft_strstr`, `ft_strnstr` → Finds a substring within another string.

### 💾 Memory Management
These functions allow you to work with memory more efficiently:

- `ft_memset` → Fills a memory block with a given value.
- `ft_bzero` → Sets a memory block to zero.
- `ft_memcpy`, `ft_memccpy` → Copies data from one memory location to another.
- `ft_memmove` → Moves memory blocks safely.
- `ft_memchr` → Searches for a specific byte within a memory block.
- `ft_memcmp` → Compares two memory blocks.
- `ft_calloc` → Allocates memory and initializes it to zero.

### 🔄 Data Conversion
Key functions for converting between different data types:

- `ft_atoi` → Converts a string into an integer.
- `ft_itoa` → Converts an integer into a string.
- `ft_tolower`, `ft_toupper` → Converts characters to lowercase or uppercase.

### 🔍 Character Verification
Useful functions for character classification, similar to `<ctype.h>`:

- `ft_isalpha` → Checks if a character is a letter.
- `ft_isdigit` → Checks if it is a number.
- `ft_isalnum` → Checks if it is alphanumeric.
- `ft_isascii` → Determines if it belongs to the ASCII range.
- `ft_isprint` → Checks if it is a printable character.

### ✨ Additional Functions
Extra functions to enhance data handling:

- `ft_substr` → Extracts a substring from a larger string.
- `ft_strjoin` → Merges two strings into one.
- `ft_strtrim` → Trims whitespace from the beginning and end of a string.
- `ft_split` → Splits a string into multiple substrings based on a delimiter.
- `ft_strmapi` → Applies a function to each character of a string and returns a new one.
- `ft_putchar_fd` → Writes a character to a file descriptor.
- `ft_putstr_fd` → Writes a string to a file descriptor.
- `ft_putendl_fd` → Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` → Writes a number to a file descriptor.

## 🚀 How to Compile and Use
To compile **Libft**, simply clone the repository and run:

```bash
make
```

This will generate `libft.a`, a static library that you can include in your projects with:

```c
#include "libft.h"
```

To clean object files and recompile, use:

```bash
make clean    # Removes intermediate files
make fclean   # Deletes intermediate files and libft.a
make re       # Cleans and recompiles everything
```
