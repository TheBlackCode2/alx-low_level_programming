#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: 0 (EXIT_SUCCESS)
*/

int main(void)
{
	int i = 0;

	for (; i <= 8; i++)
	{
		int j = i + 1;

		for (; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
