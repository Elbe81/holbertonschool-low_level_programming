#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number whose bit will be cleared.
 * @index: The index of the bit to clear, starting from 0 (LSB).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		/* Check if index is out of range */
		return (-1);

	mask <<= index;
	mask = ~mask;
	*n = *n & mask;
	/* Clear the bit at the specified index to 0 */
	return (1);
}
