#include <stdio.h>
void printfN(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

int main(void)
{
    int n = 10;
    printfN(n);
    return 0;
}//本题要求实现一个函数，对给定的正整数N，打印从1到N的全部正整数。