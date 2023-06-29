#include "main.h"

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
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar(10);
}

