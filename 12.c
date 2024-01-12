#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎題目36 
  
int main()  
{
    int year;
    scanf("%d", &year);
    if((year % 400) == 0)
        printf("Bissextile Year\n");
    else if((year % 100) == 0)
        printf("Common Year\n");
    else if((year % 4) == 0)
        printf("Bissextile Year\n");
    else
        printf("Common Year\n");
}