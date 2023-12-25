#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 2 && n % 2)
    {
        for(int i = 1; i <= (n - 1) / 2; i++)
            printf(" ");
        printf("^\n");
        for(int i = 1; i <= (n - 3) / 2; i++)
        {
            for(int j = 1; j <= (n - 1) / 2 - i; j++)
            {
                printf(" ");
            }
            printf("/");
            for(int j = 1; j <= 2 * i - 1; j++)
            {
                printf(" ");
            }
            printf("\\\n");
        }
        printf("<");
        for(int i = 1; i <= n - 2; i++)
            printf(" ");
        printf(">\n");
        for(int i = 1; i <= (n - 3) / 2; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            printf("\\");
            for(int j = 1; j <= n - 2 * i - 2; j++)
            {
                printf(" ");
            }
            printf("/\n");
        }
        for(int i = 1; i <= (n - 1) / 2; i++)
            printf(" ");
        printf("v\n");
    }
    else printf("Input Error\n");
    return 0;
}