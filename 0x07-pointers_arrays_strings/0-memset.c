#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: memory adress
 * @b: value
 * @n: number of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
