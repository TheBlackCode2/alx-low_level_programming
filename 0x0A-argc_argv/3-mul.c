#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of commands
 * @argv: commands list
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	/* Declaration of variables */
	int n1, n2;
	int result;

	/* Chek for input arguments size */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = n1 * n2;
	printf("%d\n", result);

	return (0);
}
