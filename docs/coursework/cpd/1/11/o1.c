#include <stdio.h>
char *a = "HAPPYNEWYEAR";
char b[] = "happynewyear";
int main()
{
    int i = 8;
    printf("%c%c%s%s\n", *a, b[0], b + 5, &a[5]);
    while(*(a + i))
        putchar(*(a + (i++)));
    return 0;
}