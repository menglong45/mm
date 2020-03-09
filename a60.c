#include <stdio.h>
char *mycpy(char *s1, char *s2)
{
    int idx;
    while (s2[idx] != '\0')
    {
        s1[idx] = s2[idx];
        idx++;
    }
    s1[idx]='\0';
    return s1;
 
}
int main(void)
{
    char a[] = "kkoo";
    char *dst = (char *)malloc(strlen(a) + 1);
    printf("%s", mycpy(dst, a));
    free(dst);
}