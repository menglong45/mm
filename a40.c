#include <stdio.h>
void fun(int x[5])
{
    int i,t, j;
    for (i = 0; i < 4; i++)
    {

        for (j = i + 1; j < 5; j++)
        {
            if (x[j] > x[i])
            {
                t = x[j];
                x[j] = x[i];
                x[i] = t;
            }
        }
    }
    printf("%d",x[1]);
}
int main(void)
{
    int s[5]={12,59,89,596,89};
    fun(s);
}