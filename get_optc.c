#include "holberton.h"

/**
 *get_opc - selects the option of a string within print f
 *@c: char that means one of the saved options
 *Return: pointer to consequent function
 */

int (*get_opc(char *c))(va_list)
{
	fmt fmts[] = {
		{"c", _printc},
		{"s", _prints},
/*		{"%", printpc},
		{"i", printi},
		{"d", printd},*/
		{NULL, NULL}
	};
	unsigned int i = 0;

	while (fmts[i].c != NULL)
	{
		if (*(fmts[i].c) == *c)
		{
			return (fmts[i].func_str);
		}
		i++;
	}
	return (NULL);
}
