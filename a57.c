#include<stdio.h>
#include<string.h>
int mylen(char*s)
{
    int cnt=0;
    while(s[cnt]!='\0')
    {
        cnt++;
    }
    return cnt;
}
int main(void)
{
char line[]="good";
printf("%d\n",mylen(line));
printf("%d\n",sizeof(line));
printf("%s\n",line);
return 0;

}