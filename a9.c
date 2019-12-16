#include <stdio.h>
#define N 5
int findmax(int a[], int n);
int main(void)
{
    int a[5], i, max;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = findmax(a, N-1);
    printf("%d", max);
}
int findmax(int a[], int n)
{
    int i, max = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    return a[max];
}