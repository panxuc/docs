#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0, t = 0;
    int i, a, b, c, d, e;
    int num[5] = {0};
    int min1 = 0, min2 = 0;
    scanf("%d", &n);
    if(n >= 10000 && n <= 99999)
    {
        for(i = 0; i <= 4; i++)
        {
            num[i] = n % 10;
            n /= 10;
        }
        for(a = 0; a <= 4; a++)
            for(b = 0; b <= 4; b++)
                if(a != b)
                    for(c = 0; c <= 4; c++)
                        if(c != a && c != b)
                            for(d = 0; d <= 4; d++)
                                if(d != a && d != b && d != c)
                                    for(e = 0; e <= 4; e++)
                                        if(e != a && e != b && e != c && e != d)
                                        {
                                            t = num[0] * pow(10, a) + num[1] * pow(10, b) + num[2] * pow(10, c) + num[3] * pow(10, d) +num[4] * pow(10, e);
                                            if(fabs(t - 40000) < fabs(min1 - 40000)) min1 = t;
                                            if(fabs(t - 60000) < fabs(min2 - 60000)) min2 = t;
                                        }
        printf("%d  %d\n", min1, min2);
    }
    else
    {
        printf("错误提示。\n");
    }
    return 0;
}