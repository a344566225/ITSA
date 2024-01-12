#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎28

int main() {
    int a1, a2, a3, a4, a5, a6, a7, a8;
    int b1, b2, b3, b4, b5, b6, b7, b8;
    int c1,c2,c3,c4,c5,c6,c7,c8;
    int d1, d2, d3, d4, d5, d6, d7, d8;
    int special, big1, big2, big3;
    scanf("%d", &special);
    scanf("%d", &big1);
    scanf("%d", &big2);
    scanf("%d", &big3);
    a8 = special % 10;
    special /= 10;
    b8 = big1 % 10;
    big1 /= 10;
    c8 = big2 % 10;
    big2 /= 10;
    d8 = big3 % 10;
    big3 /= 10;
    a7 = special % 10;
    special /= 10;
    b7 = big1 % 10;
    big1 /= 10;
    c7 = big2 % 10;
    big2 /= 10;
    d7 = big3 % 10;
    big3 /= 10;
    a6 = special % 10;
    special /= 10;
    b6 = big1 % 10;
    big1 /= 10;
    c6 = big2 % 10;
    big2 /= 10;
    d6 = big3 % 10;
    big3 /= 10;
    a5 = special % 10;
    special /= 10;
    b5 = big1 % 10;
    big1 /= 10;
    c5 = big2 % 10;
    big2 /= 10;
    d5 = big3 % 10;
    big3 /= 10;
    a4 = special % 10;
    special /= 10;
    b4 = big1 % 10;
    big1 /= 10;
    c4 = big2 % 10;
    big2 /= 10;
    d4 = big3 % 10;
    big3 /= 10;
    a3 = special % 10;
    special /= 10;
    b3 = big1 % 10;
    big1 /= 10;
    c3 = big2 % 10;
    big2 /= 10;
    d3 = big3 % 10;
    big3 /= 10;
    a2 = special % 10;
    special /= 10;
    b2 = big1 % 10;
    big1 /= 10;
    c2 = big2 % 10;
    big2 /= 10;
    d2 = big3 % 10;
    big3 /= 10;
    a1 = special % 10;
    special /= 10;
    b1 = big1 % 10;
    big1 /= 10;
    c1 = big2 % 10;
    big2 /= 10;
    d1 = big3 % 10;
    big3 /= 10;

    int N;
    scanf("%d", &N);
    int money = 0;
    int guess;
    int g1, g2, g3, g4, g5, g6, g7, g8;
    int time[7];
    for (int i = 0; i < 7; i++)
        time[i] = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &guess);
        g8 = guess % 10;
        guess /= 10;
        g7 = guess % 10;
        guess /= 10;
        g6 = guess % 10;
        guess /= 10;
        g5 = guess % 10;
        guess /= 10;
        g4 = guess % 10;
        guess /= 10;
        g3 = guess % 10;
        guess /= 10;
        g2 = guess % 10;
        guess /= 10;
        g1 = guess % 10;
        guess /= 10;
        if(g1 == a1 && g2 == a2 && g3 == a3 && g4 == a4 && g5 == a5 && g6 == a6 && g7 == a7 && g8 == a8)
        {
            money += 2000000;
            time[0]++;
        }    
        else if(g1 == b1 && g2 == b2 && g3 == b3 && g4 == b4 && g5 == b5 && g6 == b6 && g7 == b7 && g8 == b8)
        {
            money += 200000;
            time[1]++;
        }    
        else if(g1 == c1 && g2 == c2 && g3 == c3 && g4 == c4 && g5 == c5 && g6 == c6 && g7 == c7 && g8 == c8)
        {
            money += 200000;
            time[1]++;
        }
        else if(g1 == d1 && g2 == d2 && g3 == d3 && g4 == d4 && g5 == d5 && g6 == d6 && g7 == d7 && g8 == d8)
        {
            money += 200000;
            time[1]++;
        }
        else if(g2 == b2 && g3 == b3 && g4 == b4 && g5 == b5 && g6 == b6 && g7 == b7 && g8 == b8)
        {
            money += 40000;
            time[2]++;
        }
        else if(g2 == c2 && g3 == c3 && g4 == c4 && g5 == c5 && g6 == c6 && g7 == c7 && g8 == c8)
        {
            money += 40000;
            time[2]++;
        }
        else if(g2 == d2 && g3 == d3 && g4 == d4 && g5 == d5 && g6 == d6 && g7 == d7 && g8 == d8)
        {
            money += 40000;
            time[2]++;
        }
        else if(g3 == b3 && g4 == b4 && g5 == b5 && g6 == b6 && g7 == b7 && g8 == b8)
        {
            money += 10000;
            time[3]++;
        }
        else if(g3 == c3 && g4 == c4 && g5 == c5 && g6 == c6 && g7 == c7 && g8 == c8)
        {
            money += 10000;
            time[3]++;
        }
        else if(g3 == d3 && g4 == d4 && g5 == d5 && g6 == d6 && g7 == d7 && g8 == d8)
        {
            money += 10000;
            time[3]++;
        }
        else if(g4 == b4 && g5 == b5 && g6 == b6 && g7 == b7 && g8 == b8)
        {
            money += 4000;
            time[4]++;
        }
        else if(g4 == c4 && g5 == c5 && g6 == c6 && g7 == c7 && g8 == c8)
        {
            money += 4000;
            time[4]++;
        }
        else if(g4 == d4 && g5 == d5 && g6 == d6 && g7 == d7 && g8 == d8)
        {
            money += 4000;
            time[4]++;
        }
        else if(g5 == b5 && g6 == b6 && g7 == b7 && g8 == b8)
        {
            money += 1000;
            time[5]++;
        }
        else if(g5 == c5 && g6 == c6 && g7 == c7 && g8 == c8)
        {
            money += 1000;
            time[5]++;
        }
        else if(g5 == d5 && g6 == d6 && g7 == d7 && g8 == d8)
        {
            money += 1000;
            time[5]++;
        }
        else if(g6 == b6 && g7 == b7 && g8 == b8)
        {
            money += 200;
            time[6]++;
        }
        else if(g6 == c6 && g7 == c7 && g8 == c8)
        {
            money += 200;
            time[6]++;
        }
        else if(g6 == d6 && g7 == d7 && g8 == d8)
        {
            money += 200;
            time[6]++;
        }
    }
    for (int i = 0; i < 7;i++)
    {
        printf("%d", time[i]);
        if(i == 6)
            printf("\n");
        else
            printf(" ");
    }
    printf("%d\n", money);
}
