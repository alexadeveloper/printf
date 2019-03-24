#include "holberton.h"

/**
 *_printf - prints a string, char, integer, see the manual for more info.
 *@format: string to be printed with options inside
 *Return: amount of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, cont = 0;
	unsigned int ip = 0;
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
			_putchar(auxStr, i - ip);
			i++;
			f = get_opc(format + i);
			if (f != NULL)
				cont += f(valist) - 2;
			else
				_putchar("%", 1);
			auxStr += i - ip + 1;
			ip = i + 1;
		}
		i++;
	}
	_putchar(auxStr, i - ip);
	va_end(valist);
	return (i + cont);
}
