#include <stdio.h>
//fun函数功能：求出1000以内，前n个不能被2,3,5,7整除的数，求出这些数的和
int fun(int n)
{

    int i, j = 0, a[20], sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            a[j++] = i;
        }
        if (j > 19)
            break;
    }
    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

void main()
{
    printf("和为：%d\n", fun(20));
}
