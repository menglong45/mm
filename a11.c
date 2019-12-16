#include <stdio.h>
#define n 5
int px(int a[],int 5);
int main(void)
{
    int a[5], i, j, t;
    for (i = 1; i < 5; i++)
        scanf("%d", &a[i]);
    
    for (i = 0; i < 5; i++)
        printf(" %d ", a[i]);
    return 0;
}
int px(int a[],int n)
{
for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
        return a[j],a[i];
}