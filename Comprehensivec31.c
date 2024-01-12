#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合31

int main() {
    int input;
    scanf("%d", &input);
    int player[input][4];
    int score[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d %d %d %d", &player[i][0], &player[i][1], &player[i][2], &player[i][3]);
        score[i] = player[i][0] + player[i][1] * 2 + player[i][2] + player[i][3];
    }
    int biggest = -1;
    int index;
    for (int j = 0; j < input; j++)
    {
        for (int i = 0; i < input; i++)
        {
            if (score[i] > biggest)
            {
                biggest = score[i];
                index = i;
            }
            if (i == (input - 1))
            {
                printf("%d", (index+1));
                score[index] = -1;
                biggest = -1;
            }
        }
        if(j == (input - 1))
            printf("\n");
        else
            printf(" ");
    }
        
}  
