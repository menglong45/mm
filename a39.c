#include <stdio.h>
#define ROW 2
#define COL 6

int main(void)
{
    double a[ROW][COL], ave[COL], ave2[ROW];

    int i, j, sum = 0;
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    for (i = 0; i < COL; i++)
    {
        ave[i] = (a[ROW - 2][i] + a[ROW - 1][i]) / 2.0;
        printf("%lf\n",ave[i]);
    }
    for (i = 0; i < COL; i++)
    
        {
            sum = (sum + a[ROW - 2][i]);
        }
        ave[ROW - 2]= sum/ (COL * 1.0);
    printf("%lf\n", ave[ROW - 2]);
    for (i = 0; i < COL; i++)
    
        {
            sum = (sum + a[ROW - 1][i]);
        }
        ave[ROW - 1] = sum / (COL * 1.0);
    printf("%lf\n",ave[ROW - 1]);

}