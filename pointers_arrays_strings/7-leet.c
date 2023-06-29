#include "main.h"

/**
 * leet - Is a function that encodes a tring into numbers.
 * @str: Is a pointer.
 *
 * Return: to str.
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == leet_chars[i] || *ptr == leet_chars[i] + 32)
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
