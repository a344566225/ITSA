#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合4

int main() {
    int input;
    scanf("%d", &input);
    if(input >= 90 && input <= 100)
        printf("A\n");
    else if(input >= 80 && input <= 89)
        printf("B\n");
    else if(input >= 70 && input <= 79)
        printf("C\n");
    else if(input >= 60 && input <= 69)
        printf("D\n");
    else if(input >= 0 && input <= 60)
        printf("E\n");
    else
        printf("error\n");
}