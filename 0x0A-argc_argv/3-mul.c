#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of commands
 * @argv: commands list
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	/* Declaration of variables */
	int n[2]  = {0, 0};
	int result;
	int i;

	/* Chek for input arguments size */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Check for number digits and convert string to int */
	for (i = 1; i < argc; i++)
	{
		int sign = 1;
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				n[i - 1] *= 10;
				n[i - 1] += argv[i][j] - '0';
			}
			else if (argv[i][j] == '-')
			{
				sign *= -1;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		n[i - 1] *= sign;
	}

	/* Calc multiplication and display the result */
	result = n[0] * n[1];
	printf("%d\n", result);

	return (0);
}
