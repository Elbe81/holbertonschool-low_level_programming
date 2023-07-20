#include <stdio.h>
#include <ctype.h>

/**
 * print_name - A function to print a name.
 * @name: Variable as a pointer.
 * @f: pointer as a parameter.
 *
 * Return: According to type of letter-case.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_uppercase - A function to print uppercase.
 * @name: Variable as a parameter.
 */

void print_uppercase(char *name)
{
	char uppercase_name[100];
	int i = 0;

	while (name[i])
	{
		uppercase_name[i] = toupper((unsigned char)name[i]);
		i++;
	}
	uppercase_name[i] = '\0';

	printf("Uppercase name: %s\n", uppercase_name);
}

