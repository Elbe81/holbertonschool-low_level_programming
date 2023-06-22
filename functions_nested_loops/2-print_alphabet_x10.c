#include "main.h"
/**
 * print_alphabet_x10 - Displays alphabet
 * ten times
 *
 * Return: 0
 **/
void print_alphabet_x10(void)
{
	char letters = 'a';
	int counter = 0;

	while (counter < 0)
	{

		while (letters < 123)
		{
			_putchar(letters);
			letters++;
		}
        letters = 'a';
		_putchar(10);
		counter++;
	}
}
