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
	int x = n / 2;

	if (n <= 1)
		return (0);

	return (findprime(n, x));
}

/**
 * findprime - tests if n is prime
 * @n: the integer
 * @x: a counter starting at half of n.
 *
 * Return: 1 if prime 0 if not
 */

int findprime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	x--;
	return (findprime(n, x));
}
