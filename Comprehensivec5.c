#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合5

int main() {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int biggest = -1;
    int index;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i] > biggest)
            {
                index = i;
                biggest = a[i];
            }
        }
        printf("%d", biggest);
        if(j == 2)
            printf("\n");
        else
            printf(">");
        a[index] = -1;
        biggest = -1;
    }
        
}
