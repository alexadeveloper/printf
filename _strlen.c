#include "holberton.h"

/**
  *_strlen - compute the length of a string
  *@s: is a string
  *Return: the length of a string
 */

int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
	}
return (cont);
}
