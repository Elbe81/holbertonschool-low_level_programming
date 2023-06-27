#include "main.h"
#include <string.h>
/**
 * rev_string - This is a function to print
 * a string in reverse.
 *@s: It is a pointer.
 *
 * Return: 0.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
