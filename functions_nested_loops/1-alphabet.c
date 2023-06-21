/*
 *File 1-Alphabet
 *Programmer Luis Rivera
 */
#include <main.h>
/**
 * main- function to print
 * the alphabet
 *
 * Return: 0
 **/
void print_alphabet(void);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
