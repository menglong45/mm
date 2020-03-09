#include<stdio.h>
int c(int m,int n)
{
int j=1, i;
for(i=1;i<=n;i++)
   j*=m;
return j;
}
int main(void)
{
    int a=5,b=3;
    printf("%d",c(a,b));
}