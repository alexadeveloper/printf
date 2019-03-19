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
	int number = (unsigned int)INT_MAX + 1024;
	int i, j;

	i = _printf("Length:[%d]\n", number);
	j = printf("Length:[%d]\n", number);
	printf("fake:[%i]\n", i);
	printf("true:[%i]\n", j);
	return (0);
}
