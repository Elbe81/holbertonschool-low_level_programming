#include "main.h"
/**
 * print_rev - Funtion prints a string
 * in reverse
 * @str: It is a pointer
 * Return: 0
 */
void print_rev(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	print_rev(str + 1);
	_putchar(*str);
}
