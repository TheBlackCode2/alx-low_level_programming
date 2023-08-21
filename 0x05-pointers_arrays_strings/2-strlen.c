#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string for check
 * Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
