#include "main.h"
#include <stdlib.h>

/**
 * getLength - get the length of the givven string
 * @str: given string
 * Return: length of string
*/

int getLength(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: full string
*/

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, len = 0;
	char *b;
	int i;

	if (s1 ==  NULL && s2 == NULL)
		return ("");

	if (s1 != NULL)
		s1_len = getLength(s1);
	if (s2 != NULL)
		s2_len = getLength(s2);

	len = s1_len + s2_len;

	b = (char *) malloc((len + 1) * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		b[i] = s1[i];

	for (i = 0; i < s2_len; i++)
		b[s1_len + i] = s2[i];

	b[len] = '\0';

	return (b);

}
