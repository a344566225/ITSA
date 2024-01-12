#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//基礎題目12

int recursive(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 2;
    return recursive(n - 1) + recursive(n / 2);
}

int main()
{
    int k;
    scanf("%d", &k);
    printf("%d\n", recursive(k));
}