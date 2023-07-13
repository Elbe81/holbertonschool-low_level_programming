#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: Variable as a parameter.
 * @max: Variable as a parameter.
 *
 * Return: To arr.
 */

int *array_range(int min, int max)

{
	int *arr;
	int size, i;

	if (min > max)

	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		arr[i] = min + i;
	}

	return (arr);
}
