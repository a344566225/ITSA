#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
//基礎16
  
int main()  
{
    // char ch;
    char str1[129];
    // int cnt1 = 0;
    char str2[513];
    // int cnt2 = 0;
    // while(scanf("%c", &ch) && (ch != '\n'))
    //     str1[cnt1++] = ch;
    // str1[cnt1] = '\0';
    // while(scanf("%c", &ch) && (ch != '\n'))
    //     str2[cnt2++] = ch;
    // str2[cnt2] = '\0';
    scanf("%s", str1);
    scanf("%s", str2);
    int ans = 0;
    for (int i = 0; i < (strlen(str2) - strlen(str1) + 1); i++)
    {
        for (int j = 0; j < strlen(str1); j++)
        {
            if(str1[j] != str2[i + j])
                break;   
            if(j == (strlen(str1) - 1))
                ans++;
        }
    }
    printf("%d\n", ans);
}
