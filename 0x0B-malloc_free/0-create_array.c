#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: initialized value
 * Return: pointer of the first element is array
*/

char *create_array(unsigned int size, char c)
{
	char *buffer = (char*) malloc(size * sizeof(char));
	unsigned int i = 0;

	for (; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
