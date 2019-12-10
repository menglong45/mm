/*功能：输出由字符w构造成的形如W的图形。

w        ww        w
 w      w  w      w
  w    w    w    w
   w  w      w  w
    ww        ww               */
//  1.控制行数  2.控制输出w  3.控制输出空格  4控制换行符 //
#include <stdio.h>
int main(void)
{
    int i, j, k, n, b, c;
    printf("enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) //控制行数
    {
        for (j = 0; j <= i - 1; j++)
            printf(" ");
        printf("w");
        for (k = 1; k < 12 - j * 2; k++)
            printf(" ");
        printf("w");
        for (b = 0; b <= 2*(i - 1); b++)
            printf(" ");
        printf("w");
        for (c = 1; c <= 10 - b ; c++)
            printf(" ");
        printf("w");
        printf("\n");
    }
    return 0;
}
