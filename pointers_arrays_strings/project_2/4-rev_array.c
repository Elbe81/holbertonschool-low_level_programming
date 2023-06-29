#include "main.h"

/**
 * reverse_array - Is a fuction that reverse the
 * content of an array.
 * @a: Is a pointer.
 * @n: Is a variable parameter.
 *
 * Return: 0.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
