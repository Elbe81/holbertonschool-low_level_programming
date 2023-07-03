#include <stdio.h>

/**
 *_pow_recursion - A function to return value of x
 *raised to the power of y.
 *@x: Variable as a parameter.
 *@y: Variable as a parameter.
 *
 * Return: To pow recursion x, y.
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
