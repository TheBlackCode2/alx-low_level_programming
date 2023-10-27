#include <stdio.h>
#include <stdlib.h>

/**
 * cents_amount - prints the minimum number of coins
 *                to make change for an amount of money
 * @n: the input number
 * @coins: the coins array
 * Return: amout of cents
*/
int cents_amount(int n, int *coins)
{
	if (n <= 0)
		return (0);
	return (((int) n / *coins) + cents_amount(n % *coins, coins + 1));
}

/**
 * main - entry point
 * @argc: the number of commands arguments
 * @argv: an array containing the program command line arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{

	int coins[] = {25, 10, 5, 2, 1};

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", cents_amount(atoi(argv[1]), coins));
	return (0);
}
