#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (EXIT_SUCCESS)
*/

int main(void)
{

	int a = 0;

	for (; a < 10; a++)
	{
		int b = 0;

		for (; b < 10; b++)
		{
			int c = a;

			for (; c < 10; c++)
			{
				int d = b + 1;

				for (; d < 10; d++)
				{
					putchar(48 + a);
					putchar(48 + b);
					putchar(' ');
					putchar(48 + c);
					putchar(48 + d);

					if (a == 9 && b == 8)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
