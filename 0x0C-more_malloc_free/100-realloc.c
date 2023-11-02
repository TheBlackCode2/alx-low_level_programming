#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using
 *            malloc and free
 * @p: the input pointer to memory bloc
 * @old_size: the input of the old size of memory bloc
 * @new_size: the input of the new size of memory bloc
 * Return: a pointer to the memory adress if success,
 *         otherwise NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new_ptr[i] = ((char *) ptr)[i];

	free(ptr);
	return (new_ptr);
}
