/*
 * File 8-Base 16
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - This program prints all the numbers
 * of base 16 in lowercase
 *
 * Return: 0
 **/
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
