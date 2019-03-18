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

/**
 *_prints - print a string
 *@s: is a string
 *Return: 0 it is ok, 1 it is fail
 */

int _prints(va_list s)
{
	unsigned int length = 0;
	unsigned int i = 0;
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
	return (1);
	}
	length = _strlen(string);
	while (i < length)
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
