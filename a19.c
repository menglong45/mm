
#include <stdio.h>
#include <math.h>

int main()
{
       int start, interval, end, m;
       scanf("%d %d", &start, &interval);
       m = (start / 100) * 60 + (start % 100) + interval;
       end = (m / 60) * 100 + m % 60;
       printf("%d", end);
        return 0;
} /*有时候人们用四位数字表示一个时间，比如1106表示11点零6分。现在，你的程序要根据起始时间和流逝的时间计算出终止时间。
读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，计算当前时间经过那么多分钟后是几点
结果也表示为四位数字。当小时为个位数时，没有前导的零，即5点30分表示为530。注意，第二个数字表示的分钟数可能超过60，也可能是负*/