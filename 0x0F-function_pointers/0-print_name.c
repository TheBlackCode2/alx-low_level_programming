#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the input name to be printed
 * @f: the input function to specify how
 *     to print the name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
