#include <stdio.h>
struct stuinfo
{
    char no[10];
    char name[20];
    float chinese;
    float math;
    float english;
    float ave;
};
typedef struct stuinfo STU;
int main(void)
{
    float sum = 0, ave;
    int n,i;
    scanf("%d", &n);
    struct stuinfo stu[10];
    for ( i = 0; i < n; i++)
    {
        printf("please input %d student", i + 1);                                                                                                                                                                                                                                                                            
        scanf("%s", stu[i].no);
        scanf("%s", stu[i].name);
        scanf("%f", &stu[i].chinese);
        scanf("%f", &stu[i].math);
        scanf("%f", &stu[i].english);
        sum = stu[i].chinese + stu[i].math + stu[i].english;
        stu[i].ave = sum / 3.0;
    }
    int maxidx = 0;
    for (i = 1; i < n; i++)
    {
        if (stu[i].ave > stu[maxidx].ave)                                                                                                                                                                                                                                                                                                                                                                                                            
        {
            maxidx = i;
        }
    }
    printf("maxname=%s,maxave=%.1f",stu[maxidx].name,stu[maxidx].ave);
    return 0;
}