#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//基礎題目22

int main()
{
    int map[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &map[i][j]);
    int flag = 0;
    if(map[0][0] == map[0][1] && map[0][1] == map[0][2])
        flag = 1;
    if(map[1][0] == map[1][1] && map[1][1] == map[1][2])
        flag = 1;
    if(map[2][0] == map[2][1] && map[2][1] == map[2][2])
        flag = 1;
    if(map[0][0] == map[1][0] && map[1][0] == map[2][0])
        flag = 1;
    if(map[0][1] == map[1][1] && map[1][1] == map[2][1])
        flag = 1;
    if(map[0][2] == map[1][2] && map[1][2] == map[2][2])
        flag = 1;
    if(map[0][0] == map[1][1] && map[1][1] == map[2][2])
        flag = 1;
    if(map[0][2] == map[1][1] && map[1][1] == map[2][0])
        flag = 1;
    if(flag == 1)
        printf("True\n");
    else
        printf("False\n");
}
