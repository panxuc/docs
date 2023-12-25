#include <stdio.h>
#include <string.h>
void sort(char ar[])
{
    int i, j;
    char t;
    for(i = 0; i < strlen(ar); i++)
        for(j = 0; j < strlen(ar); j++)
            if(ar[j] < ar[j + 1])
            {
                t = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = t;
            }
}
int main()
{
    char str[110] = {0};
    scanf("%s", str);
    sort(str);
    printf("%s", str);
    return 0;
}