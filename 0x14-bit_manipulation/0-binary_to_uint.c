#include "main.h"

/**
 * power_of - get the power of a number base to other number
 * @n1: given input
 * @n2: power
 * Return: power of n1 base to n2
*/

int power_of(int n1, int n2)
{
	int pow = n1;

	if (n2 == 0)
		return (1);

	while((n2 - 1) > 0)
	{
		n2--;
		pow *= n1;
	}

	return (pow);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i;
	unsigned int num = 0;
	if (b == NULL)
		return (0);

	while(*(b + len) != '\0')
	{
		if (*(b + len) == '0' || *(b + len) == '1')
			len ++;
		else
			return (0);
	}

	for (i = len; i > 0; i--)
	{
		if (*(b + (len - i)) == '0')
			continue;

		num += power_of(2, i - 1);
	}

	return (num);
}
