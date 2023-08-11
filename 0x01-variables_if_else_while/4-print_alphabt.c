#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: 0 (ECIT_SUCCESS)
*/


int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
