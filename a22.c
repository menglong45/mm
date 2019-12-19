#include<stdio.h>
int main(void)
{
int a1=1,a2=1,n=3;
long long a3;
while(n<10)
{
a3=a1+a2;
a1=a2;
a2=a3;
n++;
printf("%ld\n",a3);
}

}