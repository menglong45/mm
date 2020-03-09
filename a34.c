#include <stdio.h>
int findmax(int x[], int n)
{
    int i, max = 0;
    for (i = 1; i < n; i++)
    {
        if (x[max] < x[i])
        {
            max = i;
        }
    }
    return max;
}
int main(void)
{
    int s[10] = {1, 4, 3, 3};

    printf("%d", findmax(s, 10));
    return 0;
}