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
	int n = 10;
	while (--n)
	{
		putchar(n + '0');
		if (n != 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
