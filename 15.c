#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎題目40
  
int main()  
{
    char input[10];
    scanf("%c %c %c %c %c %c %c %c %c %c", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8], &input[9]);
    int ISBN[10];
    for (int i = 0; i < 10; i++)
    {
        if(input[i] == '0')
            ISBN[i] = 0;
        if(input[i] == '1')
            ISBN[i] = 1;
        if(input[i] == '2')
            ISBN[i] = 2;
        if(input[i] == '3')
            ISBN[i] = 3;
        if(input[i] == '4')
            ISBN[i] = 4;
        if(input[i] == '5')
            ISBN[i] = 5;
        if(input[i] == '6')
            ISBN[i] = 6;
        if(input[i] == '7')
            ISBN[i] = 7;
        if(input[i] == '8')
            ISBN[i] = 8;
        if(input[i] == '9')
            ISBN[i] = 9;
        if(input[i] == 'X')
            ISBN[i] = 10;  
    }
    int try1[10];
    int try2[10];
    for (int i = 0; i < 10; i++)
    {
        try1[i] = 0;
        try2[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            try1[i] += ISBN[j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            try2[i] += try1[j];
        }
    }
    if((try2[9] % 11) == 0)
        printf("YES\n");
    else
        printf("NO\n");
}