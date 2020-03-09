#include <stdio.h>
 
#include <stdlib.h>
int main(void)
{
    int N,i,*a=NULL;
    float average=0,max, min;
    scanf("%d",&N);
    a = (int *)malloc(N*sizeof(int));
    if((int *)malloc(N*sizeof(int))==NULL)
    {
        exit(1);
    }
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N; i++)
    {
        min = max = a[0];
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
        average=average+a[i];
    }
   
    printf("average = %.2f\n",average/N);
    printf("max = %.2f\n",max);
    printf("min = %.2f\n",min);
    free(a);
    return 0;
}