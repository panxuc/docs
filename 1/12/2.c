#include <stdio.h>
#define N 10
int maruplus(int i, int n)
{
    int ret;
    if(i + n <= N) ret = i + n;
    else ret = (i + n) % N;
    return ret;
}
int main()
{
    int a[10][10];
    int *p;
    int sum = 0, i = 1, n;
    
    for(p = (int*)a; p < (int*)a + 100; p++)
    {
        *p = p - (int*)a;
    }
    scanf("%d", &n);
    for(i = 1; i <= N; i++)
    {
        sum += *((int*)a + (i - 1) * N + maruplus((i - 1), n));
    }
    printf("%d", sum);
    return 0;
}