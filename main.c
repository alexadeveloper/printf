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
	int number = 125;
	
	_printf("Character:[%s]\n", s);
	_printf("Length:[%d]\n", number);
	printf("Length:[%d]\n", number);
	return (0);
}
