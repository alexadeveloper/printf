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
	int i, j, k;
<<<<<<< HEAD

	k = 0;
=======
  
	k = 1024;
>>>>>>> 667d4596c552d7f17335fc4726054f96907bd199
	i = _printf("%b\n", k);
	j = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("EL FAKE: %i\n", i);
	printf("EL VERDADERO: %i\n", j);


	return (0);
}
