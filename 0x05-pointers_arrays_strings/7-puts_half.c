#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string for check
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i = ((len - 1) / 2) + 1;

	for (; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
