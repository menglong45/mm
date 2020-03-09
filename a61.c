#include<stdio.h>
char* delclar(char *s1,char s2)
{
int i,j;
for (i=j=0;str[i]!='\0';i++) //循环遍历字符串中的字符
{	if (str[i]!=c) //如果不是特定要删除的字符
str[j++]=str[i];} // 将他们重新保存到str数组中
str[j]='\0'; //加上字符串结束标志
}
