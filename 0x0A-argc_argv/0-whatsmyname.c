#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of commands arguments
 * @argv: an array containing the program command line arguments
 * Return: always 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
