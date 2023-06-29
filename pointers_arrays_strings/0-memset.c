#include "main.h"

/**
 * memset - Function to fill memory with a constant.
 * @s: Pointer.
 * @b: Variable parameter
 * @n: Unsinged variable
 *
 * Return: To s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
