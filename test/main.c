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
	int i, j;

	i = _printf("%s hola\n", "HELO");
	j = printf("%s hola\n", "HELO");
	printf("EL FAKE: %i\n", i);
	printf("EL VERDADERO: %i\n", j);


	return (0);
}
