#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 *                  parameter on each element of an array
 * @array: the input array
 * @size: the size of array
 * @action: a pointer to the function to handle the array
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
