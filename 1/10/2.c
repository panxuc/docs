#include <stdio.h>
#include <string.h>
int main()
{
    char str[110] = {0}, vwl[110] = {0};
    int vwlNum[110] = {0};
    int i = 0, j = 0, l, t;
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vwl[j] = str[i];
            vwlNum[j] = i + 1;
            j++;
        }
    l = strlen(vwl);
    for(i = 0; i < l / 2; i++)
    {
        t = vwl[i];
        vwl[i] = vwl[l - i - 1];
        vwl[l - i - 1] = t;
    }
    for(i = 0; vwlNum[i] != 0; i++)
        str[vwlNum[i] - 1] = vwl[i];
    printf("%s", str);
    return 0;    
}