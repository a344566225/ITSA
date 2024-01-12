#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//基礎題目8
int main()
{
    int input;
    scanf("%d", &input);
    int flag = 0;
    for (int i = 2; i < input; i++)
    {
        if((input % i) == 0)
        {
            flag = 1;
            break;
        }
    }
    if( input == 1)
        flag = 1;
    if(flag == 0)
        printf("YES\n");
    else
        printf("NO\n");
}