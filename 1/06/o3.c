#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, j = 1, cnt = 0, k = 0;
    int a[5] = {0};
    int b[5] = {0};
    printf("这些数是：\n");
    for(i = 1; i <= 1000; i++)
    {
        if(pow((int)sqrt(i), 2) == i)
        {
            cnt = 0; k = 0;
            for(j = 1; j < (int)sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    cnt += 2;
                    a[k] = j;
                    b[k] = i / j;
                    k++;
                    if(k > 4) break;
                }
            }
            if(cnt == 4)
                printf("%5d:%5d%5d%5d%5d%5d\n", i, a[0], a[1], (int)sqrt(i), b[1], b[0]);
        }
    }
    return 0;
}