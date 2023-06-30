#include "main.h"

/**
 *_strspn - A function that get the length of a prefix.
 *@s: Is a pointer.
 *@accept: Is a pointer.
 *
 * Return: length.
 */

#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		char *temp = accept;
		while (*temp != '\0')

		{
			if (*s == *temp)
			{
				length++;
				break;
			}
			temp++;
		}

		if (*temp == '\0')
		{
			return (length);
		}

		s++;
	}

	return (length);
}
