/*
 *File 0-Putchar
 *Programmer Luis Rivera
 */
#include <stdio.h>
/**
 * main- This code only prints "putchar"
 *
 * Return: 0
 **/
int main(void)
{
	char str[] = "_putchar\n";
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	return (0);
}
