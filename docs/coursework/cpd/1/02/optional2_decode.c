#include <stdio.h>
int main()
{
    char M[110]={'\0'}, C[110]={'\0'};
    int K;
    scanf("%s", C);
    scanf("%d", &K);
    for(int i = 0; C[i] != '\0'; i++)
        M[i] = (C[i] + 26 - 65 - K) % 26 + 65;
    printf("%s\n", M);
    return 0;
}