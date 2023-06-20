/*
 * File 7-Print_tebahpla
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - This code shows the alphabet letters
 * in a reverse order
 *
 * Return: 0
 **/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
