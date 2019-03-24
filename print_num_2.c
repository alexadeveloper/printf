#include "holberton.h"

/**
 *_printu - prints the number in decimal
 *@n: list that will take the number from va_arg
 *Return: length of the hexadecimal number
 */

int _printu(va_list n)
{
	unsigned int number;
	int aux;

	number = (int)va_arg(n, int);
	if (number == 0)
	{
		aux = 1;
		_putchar("0", 1);
	}
	else
	{
		aux = print_numbXo(number, 1, 10);
	}
	return (aux);

}
