#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the input of min integer
 * @max: the input of max integer
 * Return: a pointer to an array of integers
 *         if sucess, otherwise NULL
*/
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = (int *) malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i - min] = i;

	return (p);
}
