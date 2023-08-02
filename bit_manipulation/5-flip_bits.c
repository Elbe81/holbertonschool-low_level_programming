#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		/* Increment count if	the least significant bit is set (1) */
		xor_result >>= 1;
		/* Right-shift xor_result to check the next bit */
	}

	return (count);
}
