#ifndef __HOLBERTON__H
#define __HOLBERTON__H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/*_string.c*/
int _putchar(char *c, unsigned int size);
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
char *_strcpyE(char *dest, char *src);
int _strlenE(const char *s);

/*print_str.c*/
int _printc(va_list c, char *s);
int _prints(va_list c, char *s);
int _printpc(va_list c, char *s);
int _printS(va_list c, char *s);

/*print_num_1.c*/
int _printd(va_list n, char *s);
int _printb(va_list n, char *s);
int _printX(va_list n, char *s);
int _printx(va_list n, char *s);
int _printo(va_list n, char *s);

/*print_num_2.c*/
int _printu(va_list n, char *s);
int _printp(va_list n, char *s);

/*print_numRec.c*/
int print_numbXo(unsigned long int n, int cont, int base, char *s);
int print_num(unsigned int n, int cont, char *s);
int print_numbxo(unsigned long int n, int cont, int base, char *s);

/*get_opt.c*/
int (*get_opc(const char *c))(va_list, char *);

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
	int (*func_str)(va_list, char *);
} fmt;

#endif
