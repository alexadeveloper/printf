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

	i = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	j = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("EL FAKE: %i\n", i);
	printf("EL VERDADERO: %i\n", j);


	return (0);
}
