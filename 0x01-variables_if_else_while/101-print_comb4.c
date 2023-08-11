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

	for (; i <= 7; i++)
	{
		int j = i + 1;

		for (; j <= 8; j++)
		{
			int k = j + 1;

			for (; k <= 9; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
