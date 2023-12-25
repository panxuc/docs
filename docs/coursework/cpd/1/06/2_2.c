#include <stdio.h>
int main()
{
    int n;
    char c[110][110];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            c[i][j]=' ';
    if(n > 2 && n % 2)
    {
        c[1][(n + 1) / 2] = '^';
        c[(n + 1) / 2][1] = '<';
        c[(n + 1) / 2][n] = '>';
        c[n][(n + 1) / 2] = 'v';
        for(int i = 2; i <= (n - 1) / 2; i++)
        {
            c[i][(n + 3) / 2 - i] = '/';
            c[i][(n - 1) / 2 + i] = '\\';
            c[n - i + 1][(n + 3) / 2 - i] = '\\';
            c[n - i + 1][(n - 1) / 2 + i] = '/';
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                printf("%c", c[i][j]);
            printf("\n");
        }
    }
    else printf("Input Error\n");
    return 0;
}