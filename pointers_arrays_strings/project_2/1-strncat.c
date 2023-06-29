#include "main.h"

/**
 *_strncat - Fuction to concatenate two string.
 *@dest: It is a pointer.
 *@src: It is a pointer.
 *@n: variable parameter.
 *
 *Return: to string dest.
 */


char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;


	while (*dest != '\0')

	{
		dest++;
	}

	while (*src != '\0' && n > 0)

	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}
