#include "main.h"

/**
 * search_for_sqrt - search for the natural square
 * @i: searching number
 * @n: the input number
 * Return: the result of the search
*/
int search_for_sqrt(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (search_for_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - gets the natural square root of a number
 * @n: the input number
 * Return: the sqrt of the given number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (search_for_sqrt(0, n));
}
