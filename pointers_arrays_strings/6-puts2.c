#include "main.h"
#include <stdio.h>
/**
 * puts2 - This function every other character
 * of a string.
 * @str: This is a pointer.
 *
 * Return: o.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}

	printf("\n");
}

