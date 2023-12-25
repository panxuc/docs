#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch = 0;
    if((fp = fopen("upper.txt", "wt")) == NULL)
    {
        printf("Cannot Open File!\n");
        exit(0);
    }
    while((ch = getchar()) != '#')
    {
        if(ch >= 'a' && ch <= 'z') ch -= 32;
        fputc(ch, fp);
    }
    fclose(fp);
    if((fp = fopen("upper.txt", "rt")) == NULL)
    {
        printf("Cannot Open File!\n");
        exit(0);
    }
    while((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
    return 0;
}