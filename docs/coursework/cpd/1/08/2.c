#include <stdio.h>
int GoDown(int n)
{
    int ret;
    if(n == 1)
        ret = 1;
    else if(n == 2)
        ret = 2;
    else ret = GoDown(n - 1) + GoDown(n - 2);
    return ret;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", GoDown(n));
    return 0;
}