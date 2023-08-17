#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
*/

void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = size - 1; j >= 0; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
