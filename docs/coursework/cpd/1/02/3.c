#include <stdio.h>
int main()
{
    char num, pre, post;
    scanf("%c", &num);
    pre = num - 1;
    post = num + 1;
    printf("%d\n", num);
    printf("%c %c", pre, post);
    return 0;
}