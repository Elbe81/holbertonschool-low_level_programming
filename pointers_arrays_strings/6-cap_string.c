#include "main.h"

/**
 * cap_string - Is a function to capitalize words.
 * @str: Is a pointer parameter.
 *
 * Return: To str.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (isspace((unsigned char)*ptr) || ispunct((unsigned char)*ptr))
		{
			capitalize_next = 1;
		} else if (capitalize_next)
		{
			*ptr = toupper((unsigned char)*ptr);
			capitalize_next = 0;
		}
		ptr++;
	}

	return (str);
}
