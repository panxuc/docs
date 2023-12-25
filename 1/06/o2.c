#include <stdio.h>
int main()
{
    int n = 0, k = 1, s = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        k = 1;
        for(int j = 1; j <= i; j++)
        {
            k *= j;
        }
        s += k;
    }
    printf("%d", s);
    return 0;
}