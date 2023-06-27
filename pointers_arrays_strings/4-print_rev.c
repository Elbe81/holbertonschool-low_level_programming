#include "main.h"

/**
 * print_rev - Funtion that prints a string in reverse.
 *
 * @s: It is a pointer.
 * Return: 0.
 */

void print_rev(char *s)
{
	if (*s == '\0')

	{
		_putchar('\n');
		return;
	}

	print_rev(s + 1);
	_putchar(*s);
}
