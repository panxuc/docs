#include <stdio.h>
#include <math.h>
#define N 1000
int calc(int n)
{
    double i;
    double sum = 0.0;
    for(i = 1.0; i <= n; i++)
        sum += log10(i);
    if(sum > (int)sum) return (int)sum+1;
    else return (int)sum;
}
int main()
{
    printf("%d", calc(N));
    return 0;
}