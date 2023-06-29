#include "main.h"
#include <ctype.h>

/**
 * cap_string - Is a function to capitalize words.
 * @str: Is a pointer parameter.
 *
 * Return: To str.
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

		capitalize_next = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize_next = 1;
		}

		i++;
	}

	return (str);
}
