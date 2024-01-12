#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎30

int main() {
    char str[3];
    char str2[3];
    scanf("%s %s", str, str2);
    int mon, day;
    if(str[0] == '1')
        mon = str[1] - '0' + 10;
    else
        mon = str[1] - '0';
    if(str2[0] == '1')
        day = str2[1] - '0' + 10;
    else if(str2[0] == '2')
        day = str2[1] - '0' + 20;
    else if(str2[0] == '3')
        day = str2[1] - '0' + 30;
    else
        day = str2[1] - '0';
    if((mon == 1 && day >= 21) || (mon == 2 && day <=18))
        printf("Aquarius\n");
    else if((mon == 2 && day >= 19) || (mon == 3 && day <=20))
        printf("Pisces\n");
    else if((mon == 3 && day >= 21) || (mon == 4 && day <=20))
        printf("Aries\n");
    else if((mon == 4 && day >= 21) || (mon == 5 && day <=21))
        printf("Taurus\n");
    else if((mon == 5 && day >= 22) || (mon == 6 && day <=21))
        printf("Gemini\n");
    else if((mon == 6 && day >= 22) || (mon == 7 && day <=22))
        printf("Cancer\n");
    else if((mon == 7 && day >= 23) || (mon == 8 && day <=23))
        printf("Leo\n");
    else if((mon == 8 && day >= 24) || (mon == 9 && day <=23))
        printf("Virgo\n");
    else if((mon == 9 && day >= 24) || (mon == 10 && day <=23))
        printf("Libra\n");
    else if((mon == 10 && day >= 24) || (mon == 11 && day <=22))
        printf("Scorpio\n");
    else if((mon == 11 && day >= 23) || (mon == 12 && day <=21))
        printf("Sagittarius\n");
    else
        printf("Capricorn\n");
}
