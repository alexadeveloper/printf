#include <unistd.h>
#include "holberton.h"

/**
  *_putchar- Prints a character
  *@c: the character send it
  *Return: On succes 1
  *Description: prints a character, One Error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
