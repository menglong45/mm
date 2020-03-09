#include <stdio.h>
//#include<string.h>
int mycmp(char *a, char *b)
{
    while (*a == *b && *a != '\0')
    {
        a++;
        b++;
    }
    return *a-*b;
}

int main(void)
{
    char s[] = "ABC";
    char s1[] = "ABC";
    printf("%d", mycmp(s, s1));
    //printf("%d",strcmp(s,s1));
    return 0;
}