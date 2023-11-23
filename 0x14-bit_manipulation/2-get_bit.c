
#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: input number to search
 * @index: input index of the bit
 * Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
