#include <stdio.h>

void first_execute(void) __attribute__ ((constructor));

/**
 * first_execute - prints a sentence before the main
 *         function is executed
*/
void first_execute(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
