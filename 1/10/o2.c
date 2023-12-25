#include <stdio.h>
#include <string.h>
#include <math.h>
int aton(const char str[])
{
    int a[4] = {0};
    int i = 0, j = 0, cnt = 0;
    long long ret = 1;
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            a[j] *= 10;
            a[j] += (str[i] - 48);
        }
        else if(str[i] == '.')
        {
            cnt++;
            j++;
        }
        else
        {
            ret = 0;
            break;
        }
        if(cnt > 3)
        {
            ret = 0;
            break;
        }
        if(a[j] > 255 || a[j] < 0)
        {
            ret = 0;
            break;
        }
    }
    if(ret)
    {
        ret = 0;
        for(i = 0; i <= 3; i++)
            ret += a[i] * (int)pow(256.0, (double)(3 - i));
    }
    return ret;
}
int main()
{
    char ipv4[16] = {0};
    scanf("%s", ipv4);
    printf("%d", aton(ipv4));
    return 0;
}