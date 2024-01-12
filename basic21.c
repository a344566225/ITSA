#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//基礎題目21

int main()
{
    float n[10];
    for (int i = 0; i < 10; i++)
        scanf("%f", &n[i]);
    float max = n[0];
    float min = n[0];
    for (int i = 1; i < 10; i++)
    {
        if(n[i] > max)
            max = n[i];
        if(n[i] < min)
            min = n[i];
    }
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
}
