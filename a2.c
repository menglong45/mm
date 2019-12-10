#include <stdio.h> //数组名即首地址
int main(void)
{
    int n, i;

    int a[5], b[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 4; i >= 0; i--)
    {
        b[i] = a[4 - i];
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %d ",b[i]);
    }
    return 0;
}
