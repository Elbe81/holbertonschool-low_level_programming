#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A function to print the chessboard
 * @a: Is a pointer.
 *
 * Return: 0.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				printf("%c", a[i][j]);
			}
		}
		printf("\n");
	}
}
