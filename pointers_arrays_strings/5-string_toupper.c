#include "main.h"

/**
 * string_toupper - Is a function that changes lowercase
 * uppercase
 * @char: Is a pointer.
 *
 * Return: To str.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
