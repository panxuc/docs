#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char fName[81] = {0}, str[81] = {0};
    scanf("%s", fName);
    if((fp = fopen(fName, "rt")) == NULL)
    {
        printf("Cannot Open File!\n");
        exit(0);
    }
    fgets(str, 80, fp);
    printf("%s\n", str);
    printf("%d\n", strlen(str));
    fclose(fp);
    return 0;
}