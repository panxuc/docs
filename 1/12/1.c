#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input(int n, char **p)
{
    int i = 0;
    char str[80] = {0};
    for(i = 0; i < n; i++)
    {
        scanf("%s", str);
        p[i] = (char*)malloc(sizeof(strlen(str)));
        strcpy(p[i], str);
    }
}
void sort(int n, char **p)
{
    char *t;
    int i = 0, j = 0, k = 0;
    for(k = 79; k >= 0; k--)
    {
        for(i = 0; i < n - 1; i++)
        {
            for(j = 0; j < n - 1 - i; j++)
            {
                if(p[j][k] > p[j + 1][k])
                {
                    t = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = t;
                }
            }
        }
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    char **p = (char**)malloc(sizeof(char*) * n);
    input(n, p);
    sort(n, p);
    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
    return 0;
}