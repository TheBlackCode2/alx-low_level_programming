#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print within write function
 *
 * Return: 1 (EXIT_FAILURE)
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);
	return (1);
}
