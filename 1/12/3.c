#include <stdio.h>
#include <string.h>
int main()
{
    char tweet[140] = {0};
    char charBegin, charEnd;
    char *emojiBegin, *emojiEnd, *p;
    int i = 0, hasBegin = 0, hasEnd = 0;
    printf("转义符：");
    scanf("%c", &charBegin);
    getchar();
    printf("终止符：");
    scanf("%c", &charEnd);
    getchar();
    printf("输入文字：");
    gets(tweet);
    for(i = 0; i < strlen(tweet); i++)
    {
        if(*(tweet + i) == charBegin && !hasEnd)
        {
            emojiBegin = tweet + i;
            hasBegin = 1;
        }
        if(*(tweet + i) == charEnd && hasBegin)
        {
            emojiEnd = tweet + i;
            hasEnd = 1;
            break;
        }
    }
    printf("输出：");
    for(p = emojiBegin + 1; p < emojiEnd; p++)
        printf("%c", *p);
    return 0;
}