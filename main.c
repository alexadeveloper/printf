#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hola";
	int number = (unsigned int)INT_MAX + 1024;
	
	_printf("Character:[%s]\n", s);
	_printf("Length:[%d]\n", number);
	printf("Length:[%i]\n", number);
	return (0);
}
