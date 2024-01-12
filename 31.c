#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合8

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int score = (a + c * 2 + b * 2 + d * 2) - (e * 2);
    if(score >= 45)
        printf("A\n");
    else if(score <= 44 && score >= 35)
        printf("B\n"); 
    else if(score <= 34 && score >= 25)
        printf("C\n");
    else
        printf("D\n");
}