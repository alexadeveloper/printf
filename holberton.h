#ifndef __HOLBERTON__H
#define __HOLBERTON__H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/*_string.c*/
int _putchar(char c);
int _strlen(char *s);

/*print_str.c*/
int _printc(va_list c);
int _prints(va_list c);
int _printpc(va_list c);

/*print_num.c*/
int _printd(va_list n);
int print_num(unsigned int n, int cont);
int _printb(va_list n);
int print_numb(unsigned int n, int cont);
/*get_opt.c*/
int (*get_opc(char *c))(va_list);

/*_printf.c*/
int _printf(const char * const format, ...);


/**
 *struct fmt_t- structure for the format
 *@c: char indicating the format
 *@func_str: func string to be printed
 */

typedef struct fmt_t
{
	char *c;
	int (*func_str)(va_list);
} fmt;

#endif
