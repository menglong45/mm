#include <stdio.h>
void big(char x[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x[i] < 'z' && x[i] > 'a')
            
        {
            x[i] = x[i] - 32;
        }
        printf("%c", x[i]);
    }
}
int main(void)
{
    char a[26];
    int i;
    for (i = 0; i <= 26; i++)
    {
        scanf("%c", &a[i]);
    }
    big(a, 27);
    return 0;
}