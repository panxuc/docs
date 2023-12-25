#include <stdio.h>
int main()
{
    char c[19] = {0};
    int d[19] = {0};
    int w[19] = {0, 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2, -1};
    int i = 1, S = 0;
    for(i = 1; i <= 18; i++)
    {
        scanf("%c", &c[i]);
        if((c[i] >= '0' && c[i] <= '9') || c[18] == 'X')
            (c[i] == 'X') ? (d[i] = 10) : (d[i] = c[i] - 48);
        else goto err;
    }
    for(i = 1; i <= 17; i++)
    {
        S += w[i] * d[i];
    }
    d[0] = (12 - (S % 11)) % 11;
    if(d[0] == d[18]) printf("合法\n");
    else printf("非法，正确校验位是%d\n", d[0]);
    if(0) err: printf("ERROR\n");
}