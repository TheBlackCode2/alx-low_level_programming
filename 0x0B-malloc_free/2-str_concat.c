#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * str_concat -  concatenates two strings
 * @s1: the first input string
 * @s2: the second input string
 * Return: concatenated strings is success, otherwise NULL
*/
char *str_concat(char *s1, char *s2)
{
	int size1, size2, length;
	char *buffer;

	size1 = get_length(s1);
	size2 = get_length(s2);
	length = size1 + size2;

	buffer = (char *) malloc(sizeof(char) * length + 1);

	if (buffer)
	{
		int i;

		for (i = 0; i < length; i++)
			if (i < size1)
				buffer[i] = s1[i];
			else 
				buffer[i] = s2[i - size1];

		buffer[length] = '\0';
	}

	return (buffer);
}
