#include<stdio.h>
void swap(int *p,int *q);
int main(void)
{
    int a=5,b=3;
swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void swap(int*p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}