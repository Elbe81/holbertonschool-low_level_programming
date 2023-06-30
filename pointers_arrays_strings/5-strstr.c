#include "main.h"
#include <stddef.h>

/**
 *_strstr - A function to locates a substring
 *@haystack: Is a pointer.
 *@needle: Is a pointer.
 *
 *Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *tempHaystack = haystack;
		char *tempNeedle = needle;

		while (*tempHaystack == *tempNeedle && *tempNeedle != '\0')
		{
			tempHaystack++;
			tempNeedle++;
		}

		if (*tempNeedle == '\0')

		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
