/*
 * File 5-Print numbers
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - This code is used to diplay
 * numbers using put function
 *
 * Return: 0
 **/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	putchar('\n');

	return (0);
}
