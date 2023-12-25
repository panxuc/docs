#include <stdio.h>
int main()
{
    int a = 0, i = 0, cnt = 0;
    int n[6] = {-1};
    scanf("%d", &a);
    do
    {
        n[i] = a % 10;
        a /= 10;
        i++;
        cnt++;
    } while (a > 0);
    printf("%d\n", cnt);
    for(i = cnt - 1; i >= 0; i--)
        printf("%d", n[i]);
    printf("\n");
    for(i = 0; i < cnt; i++)
        printf("%d", n[i]);
    return 0;
}