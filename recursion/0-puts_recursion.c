#include <stdio.h>

/**
 * _puts_recursion - A function to print a string.
 * @s: Pointer as a parameter.
 *
 * Return: 0.
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')

	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
