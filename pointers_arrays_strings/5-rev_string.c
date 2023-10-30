#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string.
 */

void rev_string(char *s)
{
	int length = 0;
	int i, temp;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Swap characters from start to end */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}