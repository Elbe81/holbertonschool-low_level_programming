/*
 * File 6-Print numberz
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - This code is used to print the
 * numbers using a different for loop
 *
 * Return: 0
 **/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}

	putchar('\n');

	return (0);
}
