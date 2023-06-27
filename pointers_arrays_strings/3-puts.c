#include "main.h"

/**
 *_puts - Function to print a stream
 *@str: It is a pointer
 *
 *Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
