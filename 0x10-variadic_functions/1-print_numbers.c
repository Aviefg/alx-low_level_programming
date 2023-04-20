#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - this prints out numbers
 * @separator: pointer to separator b/w numbers
 * @n: number of variables
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}

