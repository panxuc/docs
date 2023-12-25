#include <stdio.h>
#include <string.h>
int main()
{
    char sA[31] = {0}, sB[31] = {0};
    int i, j, flag, cnt = 0;
    scanf("%s", sA);
    scanf("%s", sB);
    for(i = 0; i <= strlen(sA) - strlen(sB); i++)
        if(sA[i] == *sB)
        {
            flag = 1;
            for(j = 0; j < strlen(sB); j++)
                if(sA[i + j] != sB[j] && sB[j] != '?')
                {
                    flag = 0;
                    break;
                }
            if(flag)
            {
                printf("%d ", i);
                cnt++;
            }
        }
    if(!cnt) printf("No match found\n");
    return 0;
}