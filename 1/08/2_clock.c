#include <stdio.h>
#include <time.h>
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
    clock_t start, finish;
    long duration;
    scanf("%d", &n);
    start = clock();
    printf("%d\n", GoDown(n));
    finish = clock();
    duration = finish - start;
    printf("CPU耗时为%ld", duration);
    return 0;
}