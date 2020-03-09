#include <stdio.h>
int main(void)

{
    int *p,*q,a=5,b=6;
    p=&a;
    q=&b;
    *p=8;
    *q=9;
    printf("%x\n",p);
    printf("%x\n",q);
    printf("%d\n",*p);
    printf("%d\n",*q);
    return 0;
}