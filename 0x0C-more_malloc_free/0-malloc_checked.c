#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a bloc of memory
 * @b: the size of bytes to be allocated
 * Return: pointer to the allocted memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
