#include <unistd.h>

/**
  *_putchar- Prints a character
  *@c: the character send it
  *Return: On succes 1
  *Description: prints a character, One Error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
