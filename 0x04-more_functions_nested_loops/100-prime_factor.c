#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: 0 Always
*/

int main(void)
{
	long int n = 612852475143;
	long int i, largest_factor;
	double square = sqrt(n);

	for (i = 0; i <= square; i++)
	{
		if (n % i == 0)
			largest_factor = n / i;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
