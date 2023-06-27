#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - This function prints half of a string.
 * @str: This is a pointer.
 *
 * Return: 0.
 */

void puts_half(char *str)

{
	int length;
	int start;
	int i;

	if (str == NULL)
		return;

	length = strlen(str);
	start = (length - 1) / 2;

	for (i = start; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
