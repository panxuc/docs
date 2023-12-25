#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int ar1[], int ar2[], int n)
{
    int i, j, t;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(ar1[j] < ar1[j + 1])
            {
                t = ar1[j];
                ar1[j] = ar1[j + 1];
                ar1[j + 1] = t;
                t = ar2[j];
                ar2[j] = ar2[j + 1];
                ar2[j + 1] = t;
            }
}
int main()
{
    int sheep[110] = {0};
    int num[110];
    int i = 0, max = 0, j = 0;
    srand((unsigned int)time(NULL));
    for(i = 1; i <= 100; i++)
        sheep[i] = rand();
    for(i = 1; i <= 100; i++)
        num[i] = i;
    sort(sheep, num, 100);
    printf("%d %d\n", sheep[1], num[1]);
    return 0;
}