/*程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。*/
#include<stdio.h>
int main(void)
{
int n,i,a,b=0;
scanf("%d",&n);
for(i=1;i<=3;i++){
a=n%10;
n=n/10;
b=b*10+a;
}
printf("%d",b);
return 0;
}