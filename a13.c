#include<stdio.h>
#define N 3
main()
{
	int i=0,j,t,a[N];
	printf("请输入数据:");
	for(i=0;i<N;i++)
		scanf("%d,",&a[i]);
	for(j=1;j<N;j++)
	{
	    if(a[j]<a[0])
		{
		    t=a[0];
            a[0]=a[j];
            a[j]=t;
        }
	}
    for(i=0;i<N;i++)
        printf("%d,",a[i]);
}