#include<stdio.h>
double z(double x)
{
return 5.0/9*(x-32);
}
int main(void)
{
double f=37;
printf("%0.2lf",z(f));

}