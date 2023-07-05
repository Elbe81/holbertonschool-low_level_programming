#include <stdio.h>

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number for which the square root is to be found.
 *
 * Return: The square root if found, -1 if not found.
 */

int _sqrt_recursion(int n)

{
	int start, end, result;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	start = 1;
	end = n / 2;
	result = -1;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
	}

	return (result);
}
