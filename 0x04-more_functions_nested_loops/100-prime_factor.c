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

	while (n % 2 == 0)
		n /= 2;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
			n /= i;
		largest_factor = n;
	}

	if (n > 2)
		largest_factor = n;

	printf("%ld\n", largest_factor);

	return (0);
}
