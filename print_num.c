#include "holberton.h"

/**
  *print_num - recursion function
  *@number: is the int
  *@cont: how many send
  *Return: 0 it is ok, 1 it is fails
 */

int print_num(int number, int cont)
{
	if (number / 10)
	{
		cont++;
		cont = print_num((number / 10), cont);
	}
	_putchar((number % 10) + '0');
	return (cont);
}
/**
  *_printd - Print a int
  *@n: is a va_list that will receive a int
  *Return: 0 it is ok, 1 it is fails
 */

int _printd(va_list n)
{
	int number;
	int cont;

	number = (int)va_arg(n, int);
	if (number < 0)
	{
		_putchar('-');
		cont = print_num((number * (-1)), 2);
	}
	else
	{
		cont = print_num(number, 1);
	}
	return (cont);
}
