#include "main.h"

/**
 * print_rev - Funtion that prints a string in reverse.
 *
 * @s: It is a pointer.
 * Return: 0.
 */

void print_rev(char *s)

{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	len--;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}
