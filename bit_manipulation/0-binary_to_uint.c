#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars (binary number).
 *
 * Return: The converted number, or 0 if:
 *         - There is one or more chars in the string b that is not 0 or 1.
 *         - b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	/* Check if the input string is NULL */
	if (b == NULL)
		return (0);

	/* Iterate through the binary string */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Left shift the result by 1 position if the current char is '0' */
		if (b[i] == '0')
			result = result << 1;

		/* Left shift the result by 1 and set the last
		 *bit to 1 if the current char is '1' */
		else if (b[i] == '1')
			result = (result << 1) | 1;

		/* Return 0 if an invalid character is found in the string */
		else
			return (0);
	}

	return (result);
}

