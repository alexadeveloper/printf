#include "holberton.h"

/**
 *get_opt - selects the option of a string within print f
 *@c: char that means one of the saved options
 *Return: pointer to consequent function
 */

void (*get_opt(char *c))(va_list)
{
	fmt fmts[] = {
		{"c", printc},
		{"i", printi},
		{"f", printf},
		{"s", prints},
		{NULL, NULL}
	};
	unsigned int i = 0;

	while (fmts[i].c != NULL)
	{
		if (*(fmts[i].c) == *c && *(c + 1) == '\0')
		{
			return (fmts[i].func_str);
		}
		i++;
	}
	return (NULL);
}
