#include<stdio.h>
char fun(int n)
{int p;
switch (n)
{
case 10:
case 9:p=97-32;break;
case 8:p=97-32+1;break;
case 7:p=97-32+2;
case 6:p=97-32+2;break;

default:p=97-32+3;
    break;
}
return p;

}
int main(void)
{
printf("enter:");
int score=59;
printf("%c",fun(score/10));
}