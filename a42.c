#include <stdio.h>/*选择排序*/
int main(void)
{
    int a[5] = {96, 58, 95, 899, 56};
    int i, j,n=5,t;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}