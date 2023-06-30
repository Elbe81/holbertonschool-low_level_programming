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
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - (i + 1)];
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
