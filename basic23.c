#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//基礎題目23

int main()
{
    int N, a1, a2, a3;
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);
    int total = a1 * 15 +a2 * 20 + a3 * 30;
    int remain = N - total;
    int cnt_50 = 0, cnt_5 = 0, cnt_1 = 0;
    int flag = 0;
    if(remain < 0)
        flag = 1;
    while(remain >= 50)
    {
        remain -= 50;
        cnt_50++;
    }
    while(remain >= 5)
    {
        remain -= 50;
        cnt_5++;
    }
    while(remain >= 1)
    {
        remain -= 1;
        cnt_1++;
    }
    if(flag)
        printf("0\n");
    else
        printf("%d,%d,%d\n", cnt_1, cnt_5, cnt_50);
}
