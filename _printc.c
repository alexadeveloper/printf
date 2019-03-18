#include "holberton.h"

/**
  *_print.c - print a character
  *@s: is a string
  *Return: 0 it is ok, 1 it is fail
 */

int _printc(va_list c)
{
	int length = 0;
	char string;

	string = (char)va_arg(c, int);
	_putchar(string);
}
