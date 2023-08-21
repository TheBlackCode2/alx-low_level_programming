#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: string as an integer
*/

int _atoi(char *s)
{

	int n = 0;
	int sign = 1;
	int check = 0;

	while (*s != '\0')
	{
		sign *= (*s == '-') ? -1 : 1;

		if (*s >= '0' && *s <= '9')
		{
			n *= 10;
			n += *s - 48;
			check = 1;
		}
		else if (check)
			break;

		s++;
	}

	return (n * sign);
}
