#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: 0 (ECIT_SUCCESS)
*/


int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
