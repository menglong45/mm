#include <stdio.h>
#define len 5
int findmax(int a[], int n)
{
    int max = 0, i;
    for (i = 1; i < len; i++)
    {

        if (a[i] > a[max])
        {
            max = i;
        }
    }

    return max;
}