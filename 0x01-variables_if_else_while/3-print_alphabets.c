#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (ECIT_SUCCESS)
*/


int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	for (; ch1 <= 'z'; ch1++)
		putchar(ch1);

	for (; ch2 <= 'Z'; ch2++)
		putchar(ch2);

	putchar('\n');
	return (0);
}
