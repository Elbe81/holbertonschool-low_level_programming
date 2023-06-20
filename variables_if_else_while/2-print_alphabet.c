/*
 * File 2-Print alphabet
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - It is use to print the alphabet
 * using put but not printf
 *
 * Return: 0
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
