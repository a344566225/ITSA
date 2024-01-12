#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合3

int main() {
    int input;
    scanf("%d", &input);
    if((input % 2) == 0)
        printf("even\n");
    else
        printf("odd\n");
}