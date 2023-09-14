#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between numbers
 * @n: number of strings  passed to the function
 * @...: parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str;

		if (separator && i)
			printf("%s", separator);

		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	}

	printf("\n");
}
