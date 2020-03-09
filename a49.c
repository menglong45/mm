#include<stdio.h>
void splitfloat(float x,int *intpart,float *fracpart)
{
*intpart=x;
*fracpart=x-(int)x;
}
int main(void)
{
int  b;
float a,c;
printf("enter :\n");
scanf("%f",&a);
splitfloat(a,&b,&c);
printf("%0.1f %d %0.1f\n",a,b,c);
    return 0;
}