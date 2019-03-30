#include "holberton.h"

/**
 *_printR - encodes a string using rot13.
 *@valist: string to be encoded
 *@str: allocated memory for string encoded.
 *Return: string encoded
 */

int _printR(va_list valist, char *str)
{
	char lts[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ltsEqs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(valist, char *);
	int i = 0;
	int aux = 0;

	while (*(s + i))
	{
		aux = 0;
		while (lts[aux])
		{
			if (*(s + i) == lts[aux])
			{
				*(str + i) = ltsEqs[aux];
				break;
			}
			aux++;
		}
		if (aux == _strlen(lts))
			*(str + i) = *(s + i);
		i++;
	}
	return (_strlen(s));
}
