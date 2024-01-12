#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合6

int main() {
    char str[100];
    scanf("%s", str);
    if(str[0] >= 48 && str[0] <= 57)
    {
        int flag = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if(str[i] == '.')
                flag = 1;
        }
        if(flag)
            printf("float\n");
        else
            printf("int\n");
    }
    else
    {
        if(strlen(str) > 1)
            printf("string\n");
        else
            printf("char\n");
    }
}