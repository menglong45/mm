/*功能：输出由字符w构造成的形如W的图形。

w        ww        w
 w      w  w      w
  w    w    w    w
   w  w      w  w
    ww        ww               */
#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    printf("enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * (n - 1); j++)
            printf("*");
    return 0;
}