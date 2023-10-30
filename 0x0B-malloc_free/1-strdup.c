#include "main.h"
#include <stdlib.h>

/**
 * get_length - gets the length of the given string
 * @str: the input string
 * Return: the length of the input string
*/
int get_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + get_length(++str));
}

/**
 * _strdup - gets a pointer to a newly allocated
 *           space in memory, which contains a copy
 *           of the string given as a parameter.
 * @str: the input string
 * Return: a pointer to a new duplicate string,
 *         or NULL if the given string is NULL
*/
char *_strdup(char *str)
{
	int size;
	char *buffer;

	if (str == NULL)
		return (NULL);

	size = get_length(str);
	buffer = (char *) malloc(sizeof(char) * size);

	if (buffer)
	{
		int i;

		for (i = 0; i < size; i++)
			buffer[i] = str[i];
	}

	return (buffer);
}
