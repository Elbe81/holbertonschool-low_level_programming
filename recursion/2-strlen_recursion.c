#include <stdio.h>

/**
 * _strlen_recursion - A function to return a length
 * of a tring.
 * @s: A pointer as a parameter.
 *
 * Return: 0.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
