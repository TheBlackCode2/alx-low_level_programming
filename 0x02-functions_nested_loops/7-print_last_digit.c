#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: the int to check
 * Return: value of the last digit
*/

int print_last_digit(int n)
{
	int m;

	n *= (n >= 0) ? 1 : -1;

	m = n % 10;

	m *= (m >= 0) ? 1 : -1;

	_putchar(m + '0');

	return (m);
}
