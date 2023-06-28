#include <stdio.h>
#include "main.h"

/**
 * print_array - This function prints an array list.
 * @a: This is a pointer.
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[n - 1]);
}
