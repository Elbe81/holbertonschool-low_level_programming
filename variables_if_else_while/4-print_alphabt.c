/*
 * File 4-Print alphabt
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - It is used to display the alphabet
 * without showing two letter
 *
 * Return: 0
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
