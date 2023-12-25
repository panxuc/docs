#include <stdio.h>
int main()
{
    int a, b;
    printf("站\t躺\t老\n");
    for(a = 1; a <= 20; a++)
        for(b = 1; b <= 33; b++)
            if(a * 5 + b * 3 + (100 - a - b) / 3 == 100 && (100 - a - b) % 3 == 0)
                printf("%d\t%d\t%d\n", a, b, 100 - a - b);
    return 0;
}