#include "main.h"

/**
 * more_numbers - more numbers.
 * Luis Rivera
 * Return: void
 */
void more_numbers(void)
{
	int l, i;

	for (l = 0; l < 10; l++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

		_putchar('\n');

	}
}
