#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char
 * @size: the input array size
 * @c: the input char to initialize the array
 * Return: pointer to the array if success, and NULL
 *         if array size is 0 or if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = (char *) malloc(sizeof(char) * size);

	if (buffer != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			buffer[i] = c;
	}

	return (buffer);
}
