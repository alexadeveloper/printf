#include "holberton.h"

/**
  *_printc - print a character
  *@c: is a va_list that will receive a char
  *Return: 0 it is ok, 1 it is fail
 */

int _printc(va_list c)
{
	char string;

	string = (char)va_arg(c, int);
	_putchar(string);
	return (0);
}
