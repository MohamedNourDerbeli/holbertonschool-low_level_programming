# C Memory Allocation Project

This project includes C source files and a header file for memory allocation using `malloc` and `calloc`. Below is an overview of each component:

![Project Logo](https://i.ytimg.com/vi/4ZhRiWM8eUk/maxresdefault.jpg)


## Source Files

1. **`0-create_array.c`**
   - **Description:** Implements a function to create an array of integers using `malloc`.
   - **Usage:** Include the function in your C program.

2. **`1-strdup.c`**
   - **Description:** Implements a function to duplicate a string using `malloc`.
   - **Usage:** Include the function in your C program.

3. **`2-str_concat.c`**
   - **Description:** Implements a function to concatenate two strings using `malloc`.
   - **Usage:** Include the function in your C program.

4. **`3-alloc_grid.c`**
   - **Description:** Implements a function to allocate a 2D array (grid) using `malloc`.
   - **Usage:** Include the function in your C program.

5. **`4-free_grid.c`**
   - **Description:** Implements a function to free the memory allocated for a 2D array using `free`.
   - **Usage:** Include the function in your C program.

## Header File

- **`main.h`**
  - **Description:** Header file containing function prototypes and necessary includes.
  - **Usage:** Include this header file in your C programs.

## Compilation and Usage

To compile the source files, you can use a C compiler like `gcc`. For example:

```bash
gcc -o my_program 0-create_array.c 1-strdup.c 2-str_concat.c 3-alloc_grid.c 4-free_grid.c -I.
