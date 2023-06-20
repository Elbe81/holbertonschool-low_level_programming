/*
 * File 9-Print Comb
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - This program prints all possible combinaton
 * of numbers
 *
 * Return: 0
 **/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);

		if (number != 9)
			continue;
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
