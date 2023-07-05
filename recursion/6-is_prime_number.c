#include <stdio.h>

/**
 * is_prime_number - Function that returns 1 is
 * integer is a prime number.
 * @n: Variable as a pararmeter.
 *
 * Return: 1 if prime.
 */

int is_prime_number(int n)

{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
