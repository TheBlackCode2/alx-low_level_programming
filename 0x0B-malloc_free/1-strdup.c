#include "main.h"
#include <stdlib.h>

/**
 * _strdup - get a pointer to a newly allocated space in memory
 * @str: given string
 * Return: pointer to the new string
*/

char *_strdup(char *str)
{
	int len = 0;
	char *b;
	int i;

	if (str ==  NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	b = (char *) malloc((len + 1) * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		b[i] = str[i];

	b[i] = '\0';

	return (b);

}
