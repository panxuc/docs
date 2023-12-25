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
    for(int i = 10; i <= 198; i++)
        if(prime(i) && prime(i+2))
            printf("%d %d\n", i, i+2);
    return 0;
}