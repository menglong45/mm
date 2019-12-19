//本题要求实现一个函数，计算阶数为n，系数为a[0] ... a[n]的多项式f(x)
#include <stdio.h>

#define MAXN 10

double f(int n, double a[], double x);

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for (i = 0; i <= n; i++)
        scanf("% lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
double f(int n, double a[], double x)
{
    int y, i,j;
    double sum=0,fact = 1;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <i; j++)
        {
            fact *= x;
        }  sum+=fact*a[i];printf("%d\n",sum);
    }
    return sum ;
}
