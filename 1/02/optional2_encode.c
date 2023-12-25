#include <stdio.h>
int main()
{
    char M[110]={'\0'}, C[110]={'\0'};
    int K;
    scanf("%s", M);
    scanf("%d", &K);
    for(int i = 0; M[i] != '\0'; i++)
        C[i] = (M[i] - 65 + K) % 26 + 65;
    printf("%s\n", C);
    return 0;
}