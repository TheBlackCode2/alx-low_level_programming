#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: input string
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	static int len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
	}

	return (len);
}
