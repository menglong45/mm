/*#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    printf("enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf(" * ");
        printf("\n");
    }

    return 0;
}*/
#include<stdio.h>

void main()

{

int n=6;

int i,a,b;

        //前4行.上半部分

        for( i=1;i<=n;i++)//控制行数

        {

            for(  a=n-1;a>=i;a--)//打印空格

            {

                printf(" ");

            }

            for(  b=1;b<=2*i-1;b++)//打印*

            {

                printf("*");

            }

            printf("\n");

        }

        //后3行,下半部分

        for( i=n-1;i>=1;i--)

        {

            for( a=i;a<=n-1;a++)

            {

                printf(" ");

            }

            for( b=1;b<=2*i-1;b++)

            {

                printf("*");

            }

            printf("\n");

        }

    }