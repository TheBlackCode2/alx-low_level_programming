#include "main.h"
#include <stdlib.h>

/**
 * get_length - gets the length of the given string
 * @str: the input string
 * Return: the length of the input string
*/
int get_length(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	return (1 + get_length(++str));
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first input string
 * @s2: the second input string
 * @n: the size of bytes to be concatenated
 * Return: a point to a newly allocated space in memory
 *         if success, otherwise NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int l1, l2;
	unsigned int i, j;

	l1 = get_length(s1);
	l2 = get_length(s2);
	n = ((n <= l2) ? n : l2);

	c = (char *) malloc(sizeof(char) * (l1 + n + 1));

	if (!c)
		return (NULL);

	for (i = 0; i < l1; i++)
		c[i] = s1[i];

	for (j = 0; j < n; j++)
		c[l1 + j] = s2[j];

	c[l1 + n] = '\0';

	return (c);
}
