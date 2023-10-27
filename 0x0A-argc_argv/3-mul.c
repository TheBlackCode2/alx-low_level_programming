#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of commands arguments
 * @argv: an array containing the program command line arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int result;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
