#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//基礎題目9

int main()
{
    int input;
    scanf("%d", &input);
    int answer = 0;
    for (int i = 1; i <= input; i++)
    {
        if((i % 3) == 0)
            answer += i;
    }
    printf("%d\n", answer);
}
