#include <stdio.h>
#define len 5
int findmax(int a[], int n)
{
    int max = 0, i;
    for (i = 1; i < n; i++)
    {

        if (a[i] > a[max])
        {
            max = i;
        }
    }

    return max;
}

int main()
{
    int a[5] = {12, 58, 2, 1, 98}, i, t;
    for (i = len - 1; i > 0; i--)
    {
        int max = findmax(a, i + 1);
        t = a[max];
        a[max] = a[i];
        a[i] = t;
    }

    for ( int i = 0; i < len; i++)
        printf(" %d ", a[i]);
    return 0;
}
