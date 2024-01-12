#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//綜合19
int recursive(int n)
{
    int total;
    if((n - 1) <= 0)
        return 0;
    total = (n + 1) * n * (n - 1);
    return (total + recursive(n - 1));
}
int main() {
    int input;
    scanf("%d", &input);
    int ans[input];
    int n;
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &n);
        ans[i] = recursive(n);
    }
    for (int i = 0; i < input; i++)
        printf("%d\n", ans[i]);
}  
