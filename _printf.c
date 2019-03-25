#include "holberton.h"

/**
 *_printf - prints a string, char, integer, see the manual for more info.
 *@format: string to be printed with options inside
 *Return: amount of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, cont = 0, mallocInd = 0, tmp = 0;
	int (*f)(va_list, char *) = NULL;
	char *s = malloc(1100 * sizeof(char));

	va_list(valist);
	va_start(valist, format);
	if (s == NULL || format == NULL || (_strlen(format) == 1 && *format == '%'))
		return (-1);
	while (format != NULL && *(format + i) != '\0')
	{
		f = NULL;
		if (*(format + i) == '%')
		{
			i++;
			f = get_opc(format + i);
			if (f != NULL)
			{
				tmp = f(valist, s + mallocInd);
				cont += tmp - 2;
				mallocInd += tmp - 1;
			}
			else
			{
				*(s + mallocInd) = '%';
				mallocInd++;
			}
		}
		(f == NULL) ? *(s + mallocInd) = *(format + i) : 1;
		i++;
		mallocInd++;
		if (mallocInd >= 1024)
		{
			_putchar(s, mallocInd);
			mallocInd = 0;
		}
	}
	_putchar(s, mallocInd);
	free(s);
	va_end(valist);
	return (i + cont);
}
