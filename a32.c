#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}