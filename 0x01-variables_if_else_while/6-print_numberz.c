#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (ECIT_SUCCESS)
*/


int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		putchar(48 + i);

	putchar('\n');
	return (0);
}
