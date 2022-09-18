#include <stdio.h>
/**
 * main - Prints 10 astericks in 5 rows
 * 
 * Return: Always 0
 */
int astericks(void)
{
  
    int i, j;
    for (i = 48; i <= 52; i++)
    {
        for (j = 48; j <= 57; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}