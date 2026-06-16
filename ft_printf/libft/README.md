*This project ha<div align="center">
  <h1>🧱 Libft | 42 Madrid</h1>
  <p><i>My very first custom C standard library.</i></p>
</div>

---

## 📖 About The Project

`libft` is the foundational project of the 42 school core curriculum. The goal is to build a custom C library from scratch, recreating some of the most essential functions from the standard `<libc.h>`, along with a set of useful additional utility functions. 

Since the use of standard C library functions is strictly forbidden in most 42 projects, this library will serve as the core toolkit for all future assignments in the curriculum.

Through this project, I have deeply explored:
- Memory allocation and management (`malloc`, `free`)
- Complex pointer manipulation and pointer arithmetic
- String manipulation and traversing
- The implementation and management of dynamic data structures (Linked Lists)

---

## 🛠️ Function Overview

The library is divided into three main sections based on the project subject.

### 1. Standard Libc Functions
Reimplementations of standard C library functions.

| Character Checking | String Manipulation | Memory Manipulation |
| :--- | :--- | :--- |
| `ft_isalpha` | `ft_strlen` | `ft_memset` |
| `ft_isdigit` | `ft_strlcpy` | `ft_bzero` |
| `ft_isalnum` | `ft_strlcat` | `ft_memcpy` |
| `ft_isascii` | `ft_strchr` | `ft_memmove` |
| `ft_isprint` | `ft_strrchr` | `ft_memchr` |
| `ft_toupper` | `ft_strncmp` | `ft_memcmp` |
| `ft_tolower` | `ft_strnstr` | `ft_calloc` |
| | `ft_strdup` | |
| | `ft_atoi` | |

### 2. Additional Functions
Utility functions that are not part of the standard libc but are extremely useful for string and file descriptor operations.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Returns a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Trims specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer value to a null-terminated string. |
| `ft_strmapi` | Applies a function to each character of a string, creating a new string. |
| `ft_striteri` | Applies a function to each character of a string, modifying it in place. |
| `ft_putchar_fd` | Outputs a character to the given file descriptor. |
| `ft_putstr_fd` | Outputs a string to the given file descriptor. |
| `ft_putendl_fd` | Outputs a string to the given file descriptor, followed by a newline. |
| `ft_putnbr_fd` | Outputs an integer to the given file descriptor. |

### 3. Bonus Functions (Linked Lists)
Functions designed to manipulate a custom linked list structure (`t_list`).

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a new node at the beginning of the list. |
| `ft_lstsize` | Counts the total number of nodes in a list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a new node at the end of the list. |
| `ft_lstdelone` | Frees the memory of a single node's content and the node itself. |
| `ft_lstclear` | Deletes and frees the given node and every successor of that node. |
| `ft_lstiter` | Iterates the list and applies a function to the content of each node. |
| `ft_lstmap` | Iterates the list, applies a function to the content, and creates a new list resulting from the successive applications. |

---

## 🚀 Usage & Compilation

The project includes a `Makefile` that compiles the source files into a static library (`libft.a`).

### Available Rules:
- `make` : Compiles the standard and additional functions into `libft.a`.
- `make bonus` : Compiles the linked list functions and adds them to `libft.a`.
- `make clean` : Removes all the `.o` (object) files.
- `make fclean` : Removes all object files and the `libft.a` binary.
- `make re` : Executes `fclean` followed by `make`, recompiling the entire project.

To use it in your own projects, simply include the header and compile it alongside your files:
```c
#include "libft.h"