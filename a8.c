#include <stdio.h>
int min,a; //全局变量？？

void findmin(void) 
{

    if (min < a)
    {
        min = min;
    }
    else
    {
        min = a;
    }
}
int main(void)
{
    int i, n[5];
    printf("enter :");
    for (i = 0; i < 5; i++)
        scanf("%d", &n[i]);
    min = n[0];
    for (i = 1; i < 5; i++)
    {
        a = n[i];
        findmin();
    }
    printf("%d", min);
    return 0;
}