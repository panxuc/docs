#include <stdio.h>
int main()
{
    long long a, b, n, i, sum = 0;
    printf("please input a,b,n\t\t");
    scanf("%lld", &a);
    getchar();
    scanf("%lld", &b);
    getchar();
    scanf("%lld", &n);
    for(i = 1; i <= n; i++)
    {
        sum += a * b;
        a--; b--;
    }
    printf("the all number of guan tou is %lld", sum);
    return 0;
}