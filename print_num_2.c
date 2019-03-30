#include "holberton.h"

/**
 *_printu - prints the number in decimal
 *@n: list that will take the number from va_arg
 *@s: pointer to the buffer of 1024 bytes
 *Return: length of the hexadecimal number
 */

int _printu(va_list n, char *s)
{
	unsigned int number;
	int aux;

	number = (int)va_arg(n, int);
	if (number == 0)
	{
		aux = 1;
		*s = '0';
	}
	else
	{
		aux = print_numbXo(number, 1, 10, s);
	}
	return (aux);

}

/**
 *_printp - prints the address in hexadecimal
 *@n: list that will take the number from va_arg
 *@s: pointer to the buffer of 1024 bytes
 *Return: length of the hexadecimal number
 */

int _printp(va_list n, char *s)
{
	unsigned long int number;
	char null[] = "(nil)";
	int aux;

	number = va_arg(n, long int);
	if (number == 0)
	{
		aux = 6;
		_strcpy(s, null);
		return (aux);
	}
	else
	{
		*s = '0';
		*(s + 1) = 'x';
		aux = print_numbxo(number, 3, 16, s + 2);
	}
	return (aux);

}
