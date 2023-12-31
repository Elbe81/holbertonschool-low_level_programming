#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: A pointer as a parameter.
 * @s2: A pointer as a parameter.
 *
 * Return: To result.
 */

char *str_concat(char *s1, char *s2)

{
	size_t s1_len, s2_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	result = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
