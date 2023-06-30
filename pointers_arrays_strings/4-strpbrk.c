#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - A function that searches a string
 * @s: Is a pointer.
 * @accept: Is a pointer.
 *
 * Return: null.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}

	return (NULL);
}
