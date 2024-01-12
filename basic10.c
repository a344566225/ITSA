#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎10
  
int main()  
{
    int a,b;
    scanf("%d %d", &a, &b);
    while(1)
    {
        if(a < b)
            b = b % a;
        else
            a = a % b;
        if(a == 0)
        {
            printf("%d\n", b);
            break;
        }
        if(b == 0)
        {
            printf("%d\n", a);
            break;
        }
    }
}
