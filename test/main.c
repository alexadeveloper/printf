#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
