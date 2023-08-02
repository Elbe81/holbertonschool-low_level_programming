#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 1UL << (sizeof(unsigned long int) * 8 - 1); i > 0; i >>= 1)
	{
		if (n & i)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
}
