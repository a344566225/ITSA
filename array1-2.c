#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//中文-陣列1-2
  
int main()  
{
    int input[6];
    scanf("%d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5]);
    for (int i = 5; i >= 0; i--)
    {
        printf("%d", input[i]);
        if(i==0)
        {
            printf("\n");
            break;
        }
        printf(" ");
    }
}
