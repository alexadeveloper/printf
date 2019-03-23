#include "holberton.h"

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
		_putchar('-', 1);
		cont = print_num((number * (-1)), 2);
	}
	else
	{
		cont = print_num(number, 1);
	}
	return (cont);
}

/**
  *_printb - print a binary
  *@n: the number to convert it
  *Return: the num send it
 */

int _printb(va_list n)
{
	unsigned int number;
	int aux;

	number = (unsigned int)va_arg(n, int);
	if (number == 0)
	{
		aux = 1;
		_putchar('0', 1);
	}
	else
	{
		aux = print_numbXo(number, 1, 2);
	}
	return (aux);
}

/**
 *_printX - prints the number in hexadecimal
 *@n: list that will take the number from va_arg
 *Return: length of the hexadecimal number
 */

int _printX(va_list n)
{
	unsigned int number;
	int aux;

	number = (int)va_arg(n, int);
	if (number == 0)
	{
		aux = 1;
		_putchar('0', 1);
	}
	else
	{
		aux = print_numbXo(number, 1, 16);
	}
	return (aux);

}

/**
 *_printx - prints the number in hexadecimal
 *@n: list that will take the number from va_arg
 *Return: length of the hexadecimal number
 */

int _printx(va_list n)
{
	unsigned int number;
	int aux;

	number = (int)va_arg(n, int);
	if (number == 0)
	{
		aux = 1;
		_putchar('0', 1);
	}
	else
	{
		aux = print_numbxo(number, 1, 16);
	}
	return (aux);

}

/**
 *_printo - prints the number in octal
 *@n: list that will take the number from va_arg
 *Return: length of the hexadecimal number
 */

int _printo(va_list n)
{
	unsigned int number;
	int aux;

	number = (int)va_arg(n, int);
	if (number == 0)
	{
		aux = 1;
		_putchar('0', 1);
	}
	else
	{
		aux = print_numbXo(number, 1, 8);
	}
	return (aux);

}
