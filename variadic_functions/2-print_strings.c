#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function to print strings.
 * @separator: String to be printed.
 * @n: number of strings passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	va_start(args, n);
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)

		{
			printf("(nil)");
		}

		else

		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)

		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
