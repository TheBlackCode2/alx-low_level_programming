#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 * @...: parameters
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (*(format + i) != '\0')
	{
		if ( (*(format + i) == 'c' || *(format + i) == 'i' || *(format + i) == 'f' || *(format + i) == 's') && i)
		{
			printf(", ");			
		}

		if (*(format + i) == 'c')
			printf("%c", (char) va_arg(args, int));

		else if (*(format + i) == 'i')
			printf("%d", va_arg(args, int));

		else if (*(format + i) == 'f')
			printf("%f", va_arg(args, double));

		else if (*(format + i) == 's')
		{
			char *str = va_arg(args, char *);

			printf("%s", ((str) ? str : "(nil)"));
		}

		i++;
	}

	printf("\n");
	va_end(args);

}
