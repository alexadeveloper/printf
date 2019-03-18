#include "holberton.h"

/**
 *_printf - prints a string, char, integer, see the manual for more info.
 *@str: string to be printed with options inside
 *Return: none
 */

void _printf(const char * const str, ...)
{
	unsigned int i = 0;
	void (*f)(va_list) = NULL;

	va_list(valist);
	va_start(valist, str);
	while (str != NULL && *(str + i) != '\0')
	{
		if (*(str + i) == "%")
		{
			i++;
			f = get_opc(str + i);
			if (f != NULL)
				f(valist);
		}
		_putchar(str + i);
		i++;
	}
	va_end(valist);
}
