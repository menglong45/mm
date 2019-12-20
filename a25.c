#include <stdio.h>
int main(void)
{

    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            (j <= i) ? printf("%d*%d=%d   ", j, i, i * j) : printf(" ");
        }
        printf("\n");
    }
    return 0;
}