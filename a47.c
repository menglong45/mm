#include<stdio.h>
int main(void)
{
int lower,upper, fahr;
double celsius;
scanf("%d %d",&lower,&upper);
if(lower<=upper)
{ printf("fahr celsius\n");
for(fahr=lower;fahr<=upper;fahr+=2)
{
    celsius=5.0*(fahr-32)/9.0;
    printf("%d%6.1lf\n",fahr,celsius);//输出占六个字符%6.1lf
}
}
else printf("Invalid");
    return 0;
}