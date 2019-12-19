#include <stdio.h>
#include<math.h>
int main(void)
{
    int i;
    double pi = 0, flag = 1.0;
    for (i = 1;; i = i + 2)
    {
        pi += flag / i;
        flag = flag * (-1);
        if (fabs(flag / i) < 0.00000001)
        {
            break;
        }
    }
    printf("%lf", 4 * pi);
}