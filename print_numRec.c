#include "holberton.h"

/**
  *print_numbXo -  print a binary of a int
  *@number: is the int
  *@cont: how many send
  *@base: base of the conversion to be done
  *@s: pointer to the buffer of 1024 bytes
  *Return: the cant of numbers send it
 */

int print_numbXo(unsigned long long int number, int cont, int base, char *s)
{
	unsigned int tmp = number, contAux = 0;

	while (tmp / base != 0)
	{
		tmp /= base;
		contAux++;
	}
	if (number == 0)
	{
		return (cont - 1);
	}
	else
	{
		cont++;
		cont = print_numbXo((number / base), cont, base, s);
		if ((number % base) < 10)
			*(s + contAux) = (number % base) + '0';
		else
			*(s + contAux) = ((number % base) - 10) + 'A';
	}
	return (cont);
}

/**
  *print_num - recursion function
  *@number: is the int
  *@cont: how many send
  *@s: pointer to the buffer of 1024 bytes
  *Return: 0 it is ok, 1 it is fails
 */

int print_num(unsigned int number, int cont, char *s)
{
	unsigned int tmp = number, contAux = 0;

	while (tmp / 10)
	{
		tmp /= 10;
		contAux++;
	}
	if (number / 10)
	{
		cont++;
		cont = print_num((number / 10), cont, s);
	}
	*(s + contAux) = (number % 10) + '0';
	return (cont);
}

/**
  *print_numbxo -  print a binary of a int
  *@number: is the int
  *@cont: how many send
  *@base: base of the conversion to be done
  *@s: pointer to the buffer of 1024 bytes
  *Return: the cant of numbers send it
 */

int print_numbxo(unsigned long long int number, int cont, int base, char *s)
{
	unsigned long long int tmp = number, contAux = 0;

	while (tmp / base != 0)
	{
		tmp /= base;
		contAux++;
	}
	if (number == 0)
	{
		return (cont - 1);
	}
	else
	{
		cont++;
		cont = print_numbxo((number / base), cont, base, s);
		if ((number % base) < 10)
			*(s + contAux) = (number % base) + '0';
		else
			*(s + contAux) = ((number % base) - 10) + 'a';
	}
	return (cont);
}
