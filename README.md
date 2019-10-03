# Printf
### Objective:
* Recreate the C library printf
### Requirements:
* Files should be compiled with gcc 4.8.4
* No more than 5 functions per file
* Files should end with a new line
* No global variables allowed

# Function _printf(char * str, ...)

* **_printf.c**: this is the main function for our printf function. This will print char by char and check if there are special options to be printed.

* **get_optc.c**: this is the function that selects what special option has been found and returns a pointer to the special function that prints the special value.

* **print_num_#.c**: these are the files where all the functions that print numbers are found.

* **print_numRec.c**: this is the file where all the recursive functions needed by *print_num.c* are found.

* **print_str_#.c**: this is the file where all the functions that print strings are found.

* **holberton.h**: this file is the header and has all the libraries, structures and prototypes declared.

* **string.c**: this file has all the function to do things with strings (compare, length, putchar).
### Authors
Jessica Sandoval @alexadeveloper & Haroldo Velez @Haroldov
