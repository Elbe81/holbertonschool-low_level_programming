#include "main.h"

/**
 * string_toupper - It changes lowercase uppercase.
 * @str: Is a pointer.
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
