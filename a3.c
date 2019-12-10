#include <stdio.h>
int main(void)
{
    int a[5], i, max;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < 5; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
        max = a[0];
    }
    printf("%d", max);
}
//if(a[i]>a[max]){max=i;}