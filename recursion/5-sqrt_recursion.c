#include <stdio.h>

int sqrt_recursive(int n, int start, int end);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if it
 * doesn't have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursive(n, 0, n));
}

/**
 * sqrt_recursive - Helper function to perform the recursive calculation.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the range to search for the square root.
 * @end: The ending point of the range to search for the square root.
 *
 * Return: The natural square root of n, or -1
 * if it doesn't have a natural square root.
 */

int sqrt_recursive(int n, int start, int end)

{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
			return (mid);
		else if (mid * mid > n)
			return (sqrt_recursive(n, start, mid - 1));
		else
			return (sqrt_recursive(n, mid + 1, end));
	}
	return (-1);
}
