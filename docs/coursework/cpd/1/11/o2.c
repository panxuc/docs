#include <stdio.h>
void sort(int a[])
{
    int i, j, t;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3 - i; j++)
            if(a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}
void kablek(int *a)
{
    int max, min, output, i;
    sort(a);
    max = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
    min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    output = max - min;
    printf("%d-%d=%d\n", max, min, output);
    if(output != 6174)
    {
        for(i = 0; i < 4; i++)
        {
            a[i] = output % 10;
            output /= 10;
        }
        kablek(a);
    }
}
int main()
{
    int n = 0;
    int a[4] = {0};
    int i;
    scanf("%d", &n);
    if(n >= 1000 && n <= 9999)
    {
        for(i = 0; i < 4; i++)
        {
            a[i] = n % 10;
            n /= 10;
        }
        kablek(a);
    }
    else printf("error\n");
    return 0;
}