#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of commands
 * @argv: commands list
 * Return: Always 0, but is argc != 3 return 1
*/

int main(int argc, char *argv[])
{

    /* Declaration of variables */
    int sum = 0;
    int i;

    /* Check for number digits and calc sum */
    for (i = 1; i < argc; i++)
    {
        int num = 0;
        int sign = 1;
        int j;

        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] >= '0' && argv[i][j] <= '9')
            {
                num *= 10;
                num += argv[i][j] - '0';
            }
            else if (argv[i][j] == '-')
            {
                sign *= -1;
            }
            else
            {
                printf("Error\n");
                return (1);
            }
        }

        sum += (num * sign);
    }
    

    /* Calc multiplication and display the result */
    printf("%d\n", sum);

    return (0);
}