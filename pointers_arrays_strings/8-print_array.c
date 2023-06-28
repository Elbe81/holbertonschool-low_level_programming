#include <stdio.h>
#include "main.h"

/**
 * print_array - Function to print array element.
 * @a: Pointer.
 * @n: number of elements.
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < (n - 1))
        {
            printf(", ");
        }
    }
    printf("\n");
}
