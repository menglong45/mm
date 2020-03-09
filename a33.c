#include <stdio.h>
int main(void)
{
    int a[5] = {56, 554, 89, 59, 84};
    int i, temp, j;
    for (i = 0; i < 4; i++)
    {

        for (j =i+1; j < 5; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}