#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the int got check
*/

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (i < 98)
			i++;
		else
			i--;
	}

	printf("%d\n", i);
}
