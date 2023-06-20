/*
 * File 3-Print alphabets
 * Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main - It uses put function to print two
 * alphabets
 *
 * Return: 0
 **/
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');

	return (0);
}
