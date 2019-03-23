#include "holberton.h"

/**
  *print_numbXo -  print a binary of a int
  *@number: is the int
  *@cont: how many send
  *@base: base of the conversion to be done
  *Return: the cant of numbers send it
 */

int print_numbXo(unsigned int number, int cont, int base)
{
	if (number == 0)
	{
		return (cont - 1);
	}
	else
	{
		cont++;
		cont = print_numbXo((number / base), cont, base);
		if ((number % base) < 10)
			_putchar((number % base) + '0');
		else
			_putchar(((number % base) - 10) + 'A');
	}
	return (cont);
}

/**
  *print_num - recursion function
  *@number: is the int
  *@cont: how many send
  *Return: 0 it is ok, 1 it is fails
 */

int print_num(unsigned int number, int cont)
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
  *print_numbxo -  print a binary of a int
  *@number: is the int
  *@cont: how many send
  *@base: base of the conversion to be done
  *Return: the cant of numbers send it
 */

int print_numbxo(unsigned int number, int cont, int base)
{
	if (number == 0)
	{
		return (cont - 1);
	}
	else
	{
		cont++;
		cont = print_numbxo((number / base), cont, base);
		if ((number % base) < 10)
			_putchar((number % base) + '0');
		else
			_putchar(((number % base) - 10) + 'a');
	}
	return (cont);
}
