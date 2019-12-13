#include <stdio.h>
#define N 5
int findmin(int *a, int n);
int main(void)
{
    int a[5], i, min;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    min = findmin(a,N);
    printf("%d", min);
}
int findmin(int *a, int n)
{
    int i, min = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
    }
    return a[min];
}