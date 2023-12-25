#include <stdio.h>
#include <math.h>
int prime(int a)
{
    int ret = 1;
    for(int i = 2; i <= (int)sqrt(a); i++)
        if(a % i == 0)
            ret = 0;
    return ret;
}
int main()
{
    int n, p1, p2;
    scanf("%d", &n);
    if(n >= 4 && n % 2 == 0)
    {
        for(p1 = 2; p1 <= n / 2; p1++)
        {
            p2 = n - p1;
            if(prime(p1) && prime(p2))
            {
                printf("%d = %d + %d\n", n, p1, p2);
                goto end;
            }
        }
    }
    else printf("input error\n");
    end:
    return 0;
}