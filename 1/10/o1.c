#include <stdio.h>
#include <string.h>
int main()
{
    char s[110] = {0}, t[110] = {0};
    int sCnt[26] = {0}, tCnt[26] = {0};
    int i, flag = 1;
    scanf("%s", s);
    scanf("%s", t);
    for(i = 0; i < strlen(s); i++)
        sCnt[s[i] - 97]++;
    for(i = 0; i < strlen(t); i++)
        tCnt[t[i] - 97]++;
    for(i = 0; i < 26; i++)
        if(sCnt[i] != tCnt[i])
        {
            flag = 0;
            break;
        }
    printf("%d", flag);
    return 0;
}