#include <stdio.h>
int main(void)
{
    int n = 0;
    while (n<1000)
    {
        if (n % 5 == 3 && n % 7 == 6 && n % 11 == 4)

        {
            printf("%d\t", n);
            
        }

        n++;
    }
    return 0;
}