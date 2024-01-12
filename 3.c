#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t1_1, t1_2, t2_1, t2_2;
    scanf("%d %d", &t1_1, &t1_2);
    scanf("%d %d", &t2_1, &t2_2);
    int t1_min = t1_1 * 60 + t1_2;
    int t2_min = t2_1 * 60 + t2_2;
    int total_min = t2_min - t1_min;
    int money = 0;
    for (int i = 0; i < 4; i++)//2hr
    {
        if(total_min < 30)
            break;
        total_min -= 30;
        money += 30;
    }
    for (int i = 0; i < 4; i++)//4hr
    {
        if(total_min < 30)
            break;
        total_min -= 30;
        money += 40;
    }
    while(1)// >4hr
    {
        if(total_min < 30)
            break;
        total_min -= 30;
        money += 60;
    }
    printf("%d\n", money);
}