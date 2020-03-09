#include <stdio.h>/*冒泡排序*/
int main(void)
{
    int a[5] = {96, 58, 95, 899, 56};
    int i, j, t, n = 5;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}