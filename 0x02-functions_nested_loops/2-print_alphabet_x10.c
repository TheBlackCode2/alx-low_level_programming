#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		char ch = 'a';

		for (; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
