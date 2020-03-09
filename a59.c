#include <stdio.h>
int mycmp(char *a, char *a1);
int main(void)
{
    char s1[] = "abc";
    char s2[] = "abd";
    printf("%d", mycmp(s1, s2));
}
int mycmp(char *a, char *a1)
{
    int idx = 0;
    while (a[idx] != '\0' && a[idx] == a1[idx])
    {
        idx++;
    }
    return a[idx] - a1[idx];
}