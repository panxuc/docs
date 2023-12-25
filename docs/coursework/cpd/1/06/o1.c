#include <stdio.h>
int main()
{
    int a[6] = {0};
    int  i = 4, sum = 0;
    a[5] = 11;
    sum = a[5];
    for(i = 4; i >= 1; i--)
    {
        a[i] = (a[i] + sum + 1) / i;
        sum += a[i];
    }
    printf("原来共有%d个苹果。\n", sum);
    printf("A得到%d个苹果。\n", a[1]);
    printf("B得到%d个苹果。\n", a[2]);
    printf("C得到%d个苹果。\n", a[3]);
    printf("D得到%d个苹果。\n", a[4]);
    printf("E得到%d个苹果。\n", a[5]);
}