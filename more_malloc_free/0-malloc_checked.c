#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: Unsinged variable as a parameter.
 *
 * Return: To ptr.
 */

void *malloc_checked(unsigned int b)

{
	void *ptr = malloc(b);

	if (ptr == NULL)

	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
