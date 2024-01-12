#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = sqrt(pow(x, 2) + pow(y, 2));
    if(result <= 100)
        printf("inside\n");
    else
        printf("outside\n");
}
