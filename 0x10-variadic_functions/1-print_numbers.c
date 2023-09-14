#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
	}

	printf("\n");
	va_end(args);
}
