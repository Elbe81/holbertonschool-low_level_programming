#include "main.h"
#include <stddef.h>

/**
 * _strchr - Is a function that locates a character
 * in a string.
 * @s: Is a pointer.
 * @c: Is a parameter.
 *
 * Return: null.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	if (c == '\0') {
		return s;
	}

	return NULL;
}
