#include "holberton.h"

/**
  *_printd - Print a int
  *@n: is a va_list that will receive a int
  *Return: 0 it is ok, 1 it is fails
 */

int _printd(va_list n)
{
	int number;

	number = (int)va_arg(n, int);
	if (number < 0)
	{
		_putchar('-');
	}
	if (number / 10)
		_printd(number / 10);
	_putchar((number % 10) + '0');
return (0);
}
