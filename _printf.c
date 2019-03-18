#include "holberton.h"

/**
 *_printf - prints a string, char, integer, see the manual for more info.
 *@format: string to be printed with options inside
 *Return: amount of characters printed
 */

int _printf(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	int (*f)(va_list) = NULL;

	va_list(valist);
	va_start(valist, format);
	while (format != NULL && *(format + i) != '\0')
	{
		if (*(format + i) == "%")
		{
			i++;
			f = get_opc(format + i);
			if (f != NULL)
				f(valist);
		}
		_putchar(format + i);
		i++;
	}
	va_end(valist);
	return (i);
}
