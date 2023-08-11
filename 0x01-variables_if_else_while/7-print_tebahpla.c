#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *
 * Return: 0 (ECIT_SUCCESS)
*/


int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
