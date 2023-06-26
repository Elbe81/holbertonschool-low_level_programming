#include "main.h"

/**
 * main - Function that swap values
 * @n: Pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
