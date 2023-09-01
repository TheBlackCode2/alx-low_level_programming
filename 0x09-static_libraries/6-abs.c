#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
*/

int _abs(int n)
{
	n *= (n >= 0) ? 1 : -1;
	return (n);
}

