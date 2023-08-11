#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (ECIT_SUCCESS)
*/


int main(void)
{

	int i = 0;
	char ch = 'a';

	for (; i < 10; i++)
		putchar(48 + i);

	for (; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
