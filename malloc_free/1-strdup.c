#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that returns a pointer
 * allocated space.
 * @str: A pointer as a parameter.
 *
 * Return: to strcpy to duplicate.
 */

char *_strdup(char *str)

{
	size_t length;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;
	duplicate = (char *)malloc(length * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}
