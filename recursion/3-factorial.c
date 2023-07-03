#include <stdio.h>

/**
 * factorial - A function to return the factorial of a
 * given number.
 * @n: A variable as a parameter.
 *
 * Return: factorial.
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
