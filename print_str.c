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
	_putchar(&string, 1);
	return (1);
}

/**
 *_prints - print a string
 *@s: is a string in a va_list
 *Return: 0 it is ok, 1 it is fail
 */

int _prints(va_list s)
{
	unsigned int length = 0;
	char null[] = "(null)";
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		_putchar(null, 6);
		return (6);
	}
	length = _strlen(string);
	_putchar(string, length);
	return (length);
}

/**
 *_printpc - prints another percentage
 *@c: va_list unused
 *Return: number of elements
 */

int _printpc(va_list c)
{
	(void) c;
	_putchar("%", 1);
	return (1);
}
