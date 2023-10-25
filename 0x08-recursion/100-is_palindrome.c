#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: the input string
 * Return: the length of the given string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * process - checks for palindrome string
 * @s: the input string
 * @l: the length of string
 * @i: the start index
 * Return: 1 if the string is a palindrome, otherwise 0
*/

int process(char *s, int l, int i)
{
	if (i >= l)
		return (1);
	if (*(s + i) == *(s + l - 1))
		return (process(s, l - 1, i + 1));
	return (0);
}

/**
 * is_palindrome - checks if the given string is a palindrome
 * @s: the input string
 * Return: 1 if a string is a palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	int l;

	if (*s == '\0')
		return (1);

	l = _strlen_recursion(s);
	return (process(s, l, 0));
}
