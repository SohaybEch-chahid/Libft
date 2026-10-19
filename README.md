# Libft

**Your very own C standard library**

Libft is a project from the 42 / 1337 curriculum. The goal is to recreate a collection of standard C library functions and implement additional utility functions, building a reusable static library in C.

This project focuses on memory management, pointers, strings, type conversions, linked lists, and compilation with a Makefile.

## 📚 Table of Contents

- [About](#about)
- [Implemented Functions](#implemented-functions)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)
- [Learning Objectives](#learning-objectives)
- [Project Structure](#project-structure)
- [Author](#author)

## About

The purpose of Libft is to understand how common C library functions work by implementing them from scratch.

The project produces a static library named `libft.a`, which can be linked to other C programs and reused in future projects.

## Implemented Functions

### 1. Character Checking and Conversion

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic |
| `ft_isdigit` | Checks whether a character is a digit |
| `ft_isalnum` | Checks whether a character is alphanumeric |
| `ft_isascii` | Checks whether a value is in the ASCII range |
| `ft_isprint` | Checks whether a character is printable |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### 2. String Functions

| Function | Description |
|---|---|
| `ft_strlen` | Calculates string length |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares two strings up to a specified length |
| `ft_strlcpy` | Copies a string into a size-limited destination |
| `ft_strlcat` | Concatenates strings with a size limit |
| `ft_strnstr` | Searches for a substring within a limited length |
| `ft_strdup` | Duplicates a string using dynamic memory allocation |
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Concatenates two strings into a new allocation |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_strmapi` | Applies a function to each character and creates a new string |
| `ft_striteri` | Applies a function to each character in place |

### 3. Memory Functions

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a byte value |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies bytes between memory areas |
| `ft_memmove` | Copies memory areas safely when they overlap |
| `ft_memchr` | Searches memory for a byte |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates zero-initialized memory |

### 4. Conversion Functions

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer |
| `ft_itoa` | Converts an integer to a string |

### 5. File Descriptor Output Functions

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### 6. Linked List Functions

These functions operate on the `t_list` linked-list structure defined in `libft.h`.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node to the beginning of a list |
| `ft_lstsize` | Counts the nodes in a list |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node to the end of a list |
| `ft_lstdelone` | Deletes one node using a supplied deletion function |
| `ft_lstclear` | Deletes an entire list |
| `ft_lstiter` | Applies a function to every node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |

## Requirements

- A C compiler such as `cc` or `gcc`
- GNU Make
- Git (optional, for version control)
- Norminette for checking 42 coding standards

## Compilation

Clone the repository and enter the project directory:

```bash
git clone https://github.com/SohaybEch-chahid/Libft.git
cd Libft
```

Compile the library:

```bash
make
```

Other available Makefile rules:

```bash
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Clean and rebuild the library
```

After a successful build, the static library `libft.a` will be generated.

## Usage

Include `libft.h` in your C source file:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hello, Libft!");
    if (!str)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the executable:

```bash
./program
```

**Important:** Functions that allocate memory dynamically may return `NULL` if allocation fails. Check their return values and release allocated memory when it is no longer needed.

## Testing

The project can be checked using Norminette and a Libft tester.

Check coding standards:

```bash
norminette
```

Rebuild the library from scratch:

```bash
make fclean
make
```

If you have cloned a compatible Libft tester, follow its instructions to compile and run the tests.

## Learning Objectives

Through this project, I practiced:

- Implementing standard C functions from scratch
- Working with pointers and pointer arithmetic
- Managing dynamic memory with `malloc` and `free`
- Handling strings and raw memory
- Understanding file descriptors and the `write` system call
- Creating and manipulating linked lists
- Building static libraries with `ar`
- Automating compilation with Makefiles
- Debugging and testing C programs
- Following the 42 coding standard

## Project Structure

```text
Libft/
├── ft_*.c
├── libft.h
├── Makefile
└── README.md
```

The compiled `libft.a` library and object files are generated by the Makefile.

## 📖 Resources

The following resources were used to study C programming, understand standard library behavior, and learn the concepts implemented in this project.

### C Programming Fundamentals
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/) — C fundamentals, pointers, arrays, structures, and memory management.
- [cppreference — C Language](https://en.cppreference.com/w/c) — C language reference and documentation.

### Character Checking and Conversion
- [Linux man-pages — Character Functions](https://man7.org/linux/man-pages/man3/isalnum.3.html) — Character classification and conversion functions.

### String Functions
- [Linux man-pages — String Functions](https://man7.org/linux/man-pages/man3/string.3.html) — Standard string operations and their behavior.
- [cppreference — String and Byte Functions](https://en.cppreference.com/w/c/string/byte) — Reference for string and memory functions.

### Memory Management
- [malloc, calloc, and free](https://man7.org/linux/man-pages/man3/malloc.3.html) — Dynamic memory allocation and deallocation.
- [memcpy](https://man7.org/linux/man-pages/man3/memcpy.3.html) — Copying memory regions.
- [memmove](https://man7.org/linux/man-pages/man3/memmove.3.html) — Handling overlapping memory regions.
- [memcmp](https://man7.org/linux/man-pages/man3/memcmp.3.html) — Comparing memory regions.

### File Descriptors and System Calls
- [write(2)](https://man7.org/linux/man-pages/man2/write.2.html) — Writing data through file descriptors.
- [open(2)](https://man7.org/linux/man-pages/man2/open.2.html) — Opening files.
- [close(2)](https://man7.org/linux/man-pages/man2/close.2.html) — Closing file descriptors.

### Linked Lists and Data Structures
- [Generic Linked Lists in C](https://cs.rochester.edu/u/ferguson/csc/c/tutorial/linked-list/index.html) — Understanding linked-list nodes, pointers, and list operations.

### Makefiles and Static Libraries
- [GNU Make Manual — Rules](https://www.gnu.org/software/make/manual/html_node/Rule-Introduction.html) — Targets, prerequisites, and recipes.
- [GNU Make Manual — Variables](https://www.gnu.org/software/make/manual/html_node/Using-Variables.html) — Makefile variables and configuration.
- [GNU `ar` Documentation](https://sourceware.org/binutils/docs/binutils/ar.html) — Creating and managing static archives.

### Testing and Coding Standards
- [42 Norminette](https://github.com/42school/norminette) — 42 coding-style checker.
- [42 Libft Tester](https://github.com/ylam21/42_Libft_Tester) — Community tester for Libft implementations.
- [Linux man-pages](https://man7.org/linux/man-pages/) — Reference documentation for C library functions and system calls.

### Git and GitHub
- [Git Tutorial](https://git-scm.com/docs/gittutorial) — Introduction to Git and version control.
- [Git Push Documentation](https://git-scm.com/docs/git-push) — Sending local commits to a remote repository.

### Memory Management in C
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/) — Introduction to pointers and dynamic memory allocation.
- [GNU C Library — Memory Allocation](https://www.gnu.org/software/libc/manual/html_node/Memory-Allocation.html) — Detailed documentation about dynamic memory management.
- [cppreference — C Memory Management](https://en.cppreference.com/w/c/memory) — Reference for `malloc()`, `calloc()`, `realloc()`, and `free()`.
- [Valgrind Quick Start Guide](https://valgrind.org/docs/manual/quick-start.html) — Detecting memory leaks and memory errors.

---

*These resources are provided for learning and reference. Libft implementations in this repository were written as part of the project.*


## Author

**Sohayb Ech-chahid**

- GitHub: [@SohaybEch-chahid](https://github.com/SohaybEch-chahid)
- Project: [Libft](https://github.com/SohaybEch-chahid/Libft)

---

*Built as part of the 42 / 1337 curriculum.*
