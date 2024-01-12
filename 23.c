#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎29

int main() {
    char str[10];
    int N[10];
    scanf("%s", str);
    if(str[0] == 'A')
        N[0] = 10;
    if(str[0] == 'B')
        N[0] = 11;
    if(str[0] == 'C')
        N[0] = 12;
    if(str[0] == 'D')
        N[0] = 13;
    if(str[0] == 'E')
        N[0] = 14;
    if(str[0] == 'F')
        N[0] = 15;
    if(str[0] == 'G')
        N[0] = 16;
    if(str[0] == 'H')
        N[0] = 17;
    if(str[0] == 'I')
        N[0] = 34;
    if(str[0] == 'J')
        N[0] = 18;
    if(str[0] == 'K')
        N[0] = 19;
    if(str[0] == 'L')
        N[0] = 20;
    if(str[0] == 'M')
        N[0] = 21;
    if(str[0] == 'N')
        N[0] = 22;
    if(str[0] == 'O')
        N[0] = 35;
    if(str[0] == 'P')
        N[0] = 23;
    if(str[0] == 'Q')
        N[0] = 24;
    if(str[0] == 'R')
        N[0] = 25;
    if(str[0] == 'S')
        N[0] = 26;
    if(str[0] == 'T')
        N[0] = 27;
    if(str[0] == 'U')
        N[0] = 28;
    if(str[0] == 'V')
        N[0] = 29;
    if(str[0] == 'W')
        N[0] = 32;
    if(str[0] == 'X')
        N[0] = 30;
    if(str[0] == 'Y')
        N[0] = 31;
    if(str[0] == 'Z')
        N[0] = 33;
    for (int i = 1; i < 10; i++)
    {
        N[i] = str[i] - '0';
    }
    int x1, x2;
    x2 = N[0] % 10;
    N[0] /= 10;
    x1 = N[0] % 10;
    N[0] /= 10;
    int P;
    P = x1 + (9 * x2) + (8 * N[1]) + (7 * N[2]) + (6 * N[3]) + (5 * N[4]) + (4 * N[5]) + (3 * N[6]) + (2 * N[7]) + N[8] + N[9];
    if((P % 10) == 0)
        printf("CORRECT!!!\n");
    else
        printf("WRONG!!!\n");
}