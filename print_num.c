#include "holberton.h"

/**
  *_printd - Print a int
  *@i: is a va_list that will receive a int
  *Return: 0 it is ok, 1 it is fails
 */

int _printd(va_list n)
{
	int number;
	unsigned int length = 0;

	number = va_arg(n, int);
	
