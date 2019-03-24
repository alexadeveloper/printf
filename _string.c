#include <unistd.h>
#include "holberton.h"

/**
  *_putchar- Prints a character
  *@c: the character send it
  *@size: size of the buffer
  *Return: On succes 1
  *Description: prints a character, One Error, return -1
 */

int _putchar(char *c, unsigned int size)
{
	return (write(1, c, size));
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
