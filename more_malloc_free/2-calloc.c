#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _calloc - allocates space and inits to 0
 * @nmemb: # of members
 * @size: size in bytes of each member
 *
 * Return: pointer to array or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int total_size;
	void *ptr;
	unsigned char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)

	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)

	{
		return (NULL);
	}

	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total_size; i++)

	{
		byte_ptr[i] = 0;
	}

	return (ptr);
}
