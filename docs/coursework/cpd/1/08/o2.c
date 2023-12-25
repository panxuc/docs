#include <stdio.h>
long long Sk(int k)
{
    long long ret = 0;
    int i;
    for(i = 1; i <= k; i++)
        ret += i * i;
    ret *= k;
    return ret;
} 
long long Sn(int n)
{
    long long ret = 0;
    int i;
    for(i = 1; i <= n; i++)
        ret += Sk(i);
    return ret;
}
int main()
{
    long long S, NS;
    long long n;
    printf("please input integer num n\n");
    scanf("%d", &n);
    S = Sn(n);
    NS = (n * (n + 1) * (n + 2) * (8 * n * n + 11 * n + 1)) / 120;
    printf("S=%lld\tNS=%lld\n", S, NS);
    if(S > NS) printf("S>NS,output=1");
    if(S == NS) printf("S=NS,output=0");
    if(S < NS) printf("S<NS,output=-1");
    return 0;
}