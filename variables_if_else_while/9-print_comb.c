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

	for (number = 0; number <= 10; number++)
	{
		putchar('0' + number);

		if (number != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
