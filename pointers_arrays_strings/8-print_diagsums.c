#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function to print the sum of
 * two diagonals of a square.
 * @a: A pointer.
 * @size: A variable to store a value.
 *
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
	int x = 0, y = 0;
	int i;

	for (i = 0; i < (size * size); i = (i + size + 1))
		x = x + a[i];
	for (i = size - 1; i < (size * size - 1); i = (i + size - 1))
		y = y + a[i];
	printf("%d, %d\n", x, y);
}
#include "main.h"

/**
 * set_string - sets value of pointer to a char
 * @s: the string
 * @to: the value to set it to
 *
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
