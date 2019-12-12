
#include <stdio.h>
int fblaq(int n);
int main(void)
{
    int y,n;
    printf("enter n:");
    scanf("%d", &n);
     y=fblaq(n);
    printf("兔子总数：%d",y);
    return 0;
}
int fblaq(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fblaq(n - 1) + fblaq(n - 2);
}
