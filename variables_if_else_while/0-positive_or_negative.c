/*
 * File 0-Positive or negative
 * Programmer Luis Rivera
 */
#include <stdlib.h>
#include <time.h>

/** main-functionto generate random
 * numbers.
 *
 * Return always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
        printf("%d is a positive number.\n", n);
    } else if (n < 0) {
        printf("%d is a negative number.\n", n);
    } else {
        printf("%d is zero.\n", n);
    }
	return (0);
}
