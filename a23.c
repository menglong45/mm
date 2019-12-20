/*#include <stdio.h>
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {      int a=1;
        for (j = 1; j <= i; j++)
        {
            a *= j;
        }
        printf("%d\t", a);
    }
}*/
#include <stdio.h>
unsigned int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return fact(x - 1) * x;
    }
}
int main(void)
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d\t", fact(i));
    }
    return 0;
}