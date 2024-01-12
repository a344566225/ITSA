#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎題目39
  
int main()  
{
    int n;
    scanf("%d", &n);
    int score[3];
    while(n > 0)
    {
        scanf("%d %d %d", &score[0], &score[1], &score[2]);
        if(score[0] >= 60 && score[1] >= 60 && score[2] >= 60)
            printf("P\n");
        else if((score[0] < 60 && (score[0] + score[1] + score[2]) >= 220) || (score[1] < 60 && (score[0] + score[1] + score[2]) >= 220) || (score[2] < 60 && (score[0] + score[1] + score[2]) >= 220)) 
            printf("P\n");
        else if((score[0] < 60 && score[1] >= 60 && score[2] >= 60) || (score[1] < 60 && score[0] >= 60 && score[2] >= 60) || (score[2] < 60 && score[0] >= 60 && score[1] >= 60))
            printf("M\n");
        else if(score[0] >= 80 || score[1] >= 80 || score[2] >= 80)
            printf("M\n");
        else
            printf("F\n");
        n--;
    }
}

