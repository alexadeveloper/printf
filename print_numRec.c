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
	char s1;

	if (number == 0)
	{
		return (cont - 1);
	}
	else
	{
		cont++;
		cont = print_numbXo((number / base), cont, base);
		if ((number % base) < 10)
		{
			s1 = (number % base) + '0';
			_putchar(&s1, 1);
		}
		else
		{
			s1 = ((number % base) - 10) + 'A';
			_putchar(&s1, 1);
		}
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
	char s;

	if (number / 10)
	{
		cont++;
		cont = print_num((number / 10), cont);
	}
	s = (number % 10) + '0';
	_putchar(&s, 1);
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
	char s;

	if (number == 0)
	{
		return (cont - 1);
	}
	else
	{
		cont++;
		cont = print_numbxo((number / base), cont, base);
		if ((number % base) < 10)
		{
			s = (number % base) + '0';
			_putchar(&s, 1);
		}
		else
		{
			s = ((number % base) - 10) + 'a';
			_putchar(&s, 1);
		}
	}
	return (cont);
}
