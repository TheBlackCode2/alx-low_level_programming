#include "main.h"

/**
 * search_for_prime - checks if there is a prime for the given number
 * @i: searching number
 * @n: the input number
 * Return: result of search
*/
int search_for_prime(int i, int n)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (search_for_prime(i - 1, n));
}

/**
 * is_prime_number - checks if the given input is a prime number
 * @n: the input number
 * Return: 1 if the input integer is a prime number, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (search_for_prime(n / 2, n));
}
