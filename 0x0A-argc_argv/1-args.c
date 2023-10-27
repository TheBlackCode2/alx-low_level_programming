#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of commands arguments
 * @argv: an array containing the program command line arguments
 * Return: always 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%u\n", (argc - 1));
	return (0);
}
