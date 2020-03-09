#include <stdio.h>
int min, h1, i1, max, h2, i2;
void fun(int a[2][3])
{
    int i, j;max = a[0][0],min = a[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                h2 = i;
                i2 = j;
            }
            if (min > a[i][j])
            {
                min = a[i][j];
                h1 = i;
                i1 = j;
            }
        }
    }
}
int main(void)
{
    int x[2][3]={0,5,6,8,9,1};
    fun(x);
    printf("%d %d %d %d %d %d",max,h2,i2,min,h1,i1);
}