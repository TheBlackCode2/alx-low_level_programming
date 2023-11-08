#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the input array of integers
 * @size: the size of the givven array
 * @cmp: a pointer to the function to be
 *       used to compare values
 * Return: index of the element if it found, and
 *         -1 if no element matches, or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
