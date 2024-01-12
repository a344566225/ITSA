#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎27

int main() {
    int answer;
    int a, b, c, d;
    scanf("%d", &answer);
    d = answer % 10;
    answer /= 10;
    c = answer % 10;
    answer /= 10;
    b = answer % 10;
    answer /= 10;
    a = answer % 10;
    answer /= 10; 
    int A = 0, B = 0;
    int guess;
    int q, w, e, r;
    while(1)
    {
        A = 0;
        B = 0;
        scanf("%d", &guess);
        r = guess % 10;
        guess /= 10;
        e = guess % 10;
        guess /= 10;
        w = guess % 10;
        guess /= 10;
        q = guess % 10;
        guess /= 10;
        if(q == 0 && w == 0 && e == 0 && r == 0)
            break;
        if(q == a)
            A++;
        else if(q == b || q == c || q == d)
            B++;
        if(w == b)
            A++;
        else if(w == a || w == c || w == d)
            B++;
        if(e == c)
            A++;
        else if(e == a || e == b || e == d)
            B++;
        if(r == d)
            A++;
        else if(r == a || r == b || r == c)
            B++;
        printf("%dA%dB\n", A, B);
    }
}
