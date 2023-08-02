#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(unsigned long int) * 8; /* Number of bits in unsigned long int */

	mask = mask << (bit_count - 1); /* Move the mask to the most significant bit */

	while (bit_count > 0)
	{
		if (n & mask) /* Check if the bit is set (1) at the current position */
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1; /* Right shift the mask to check the next bit */
		bit_count--;
	}

	_putchar('\n');
}

