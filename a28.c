#include <stdio.h>
int main(void)
{
    int n, i, j, k;
    char a = 97;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf(" %c ", a);
        printf("\n");
        a++;
    }

    return 0;
}