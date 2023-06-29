#include "main.h"

/**
 * _strcmp - Is a function to compare two string.
 * @s1: first pointer.
 * @s2: second pointer.
 *
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (0);
}
