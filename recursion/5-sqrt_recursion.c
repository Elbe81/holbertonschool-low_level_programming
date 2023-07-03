#include <stdio.h>

/**
 * _sqrt_helper - Initiates the binary search of root
 * number.
 *@n: A variable as a parameter.
 *@start: A variable as a parameter.
 *@end: A variable as a parameter.
 *
 * Return: To square recursion to 0.
 */

int _sqrt_helper(int n, int start, int end)

{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		int sqrt = _sqrt_helper(n, mid + 1, end);

		if (sqrt == -1)
		{
			return (mid);
		}
		else
		{
			return (sqrt);
		}
	}
	else
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - Function that returns natural
 * square root of a number.
 * @n: Variable as a parameter.
 *
 * Return: To square recursion.
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}
