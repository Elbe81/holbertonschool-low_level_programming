#include <stdlib.h>

/**
 * create_array - A function that creates an array.
 * @size: Variable as a parameter.
 * @c: Variable as a parameter.
 *
 * Return: To array.
 */

char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
