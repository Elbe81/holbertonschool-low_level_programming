#include "main.h"

/**
 *_memcpy - A function to copy bytes
 *from memory area.
 *@dest: Is a pointer.
 *@src: Is a pointer.
 *@n: Parameter.
 *
 * Return: To dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}
