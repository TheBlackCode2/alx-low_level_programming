#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);
		printf("%s", ((s == NULL) ? "(nil)" : s));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}
