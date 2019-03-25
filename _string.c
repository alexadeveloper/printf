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

int _strlen(const char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 *_strcpy - copies the string pointed to by src
 *@dest: destination
 *@src: source
 *Return: pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

/**
 *_strcpyE - copies the string pointed to by src
 *@dest: destination
 *@src: source
 *Return: pointer destination
 */

char *_strcpyE(char *dest, char *src)
{
	int i = 0, iMalloc = 0, aux = 0;

	while (*(src + i) != '\0')
	{
		if ((*(src + i) > 0 && *(src + i) < 32) || (*(src + i) >= 127))
		{
			*(dest + iMalloc) = '\\';
			*(dest + iMalloc + 1) = 'x';
			iMalloc += 2;
			if (*(src + i) == 0)
			{
				aux = 2;
				*(dest + iMalloc) = '0';
				*(dest + iMalloc + 1) = '0';
			}
			else
			{
				if (*(src + i) < 16)
				{
					*(dest + iMalloc) = '0';
					iMalloc++;
				}
				aux = print_numbXo(*(src + i), 1, 16,
						   dest + iMalloc);
				iMalloc += aux - 1;
			}
		}
		else
		{
			*(dest + iMalloc) = *(src + i);
		}
		iMalloc++;
		i++;
	}
	return (dest);
}

/**
  *_strlenE - compute the length of a string taking into account
  *@s: is a string
  *Return: the length of a string
 */

int _strlenE(const char *s)
{
	int cont = 0, len = 0;

	while (*(s + cont) != '\0')
	{
		if ((*(s + cont) > 0 && *(s + cont) < 32) || (*(s + cont) >= 127))
		{
			len += 4;
			cont++;
		}
		else
		{
			len++;
			cont++;
		}
	}
	return (len);
}
