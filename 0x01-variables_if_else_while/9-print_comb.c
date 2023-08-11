#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: 0 (EXIT_SUCCESS)
*/

int main(void)
{
	int i = 0;
	int m = 10;

	for (; i < m; i++)
	{
		putchar(48 + i);

		if (i != m - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
