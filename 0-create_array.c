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
	if (size == 0)
		return (NULL);

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
