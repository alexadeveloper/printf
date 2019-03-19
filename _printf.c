#include "holberton.h"

/**
 *_printf - prints a string, char, integer, see the manual for more info.
 *@format: string to be printed with options inside
 *Return: amount of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, cont = 0;
	int (*f)(va_list) = NULL;
	char *auxStr = (char *)format;

	va_list(valist);
	va_start(valist, format);
	if (format == NULL || (_strlen(auxStr) == 1 && *auxStr == '%'))
		return (-1);
	while (format != NULL && *(format + i) != '\0')
	{
		f = NULL;
		if (*(format + i) == '%')
		{
			i++;
			f = get_opc(auxStr + i);
			if (f != NULL)
				cont += f(valist) - 2;
			else
				_putchar('%');
		}
		if (f == NULL)
			_putchar(*(format + i));
		i++;
	}
	va_end(valist);
	return (i + cont);
}
