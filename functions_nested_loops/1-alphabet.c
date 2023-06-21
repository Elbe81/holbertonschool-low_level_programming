/*
 *File 1-Alphabet
 *Programmer Luis Rivera
 */
#include <stdio.h>

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
/**
 * main- This program displays the alphabet
 * using a function
 *
 * Return: 0
 **/
int main(void)
{
	print_alphabet();
	return (0);
}
