#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("short = %zd\n", sizeof(short));
    printf("int = %zd\n", sizeof(int));
    printf("long = %zd\n", sizeof(long));
    printf("unsigned short = %zd\n", sizeof(unsigned short));
    printf("unsigned long = %zd\n", sizeof(unsigned long));
    printf("char = %zd\n", sizeof(char));
    printf("bool = %zd\n", sizeof(bool));
    printf("double = %zd\n", sizeof(double));
    printf("float = %zd\n", sizeof(float));
    float a = 1.111111111111111111111111111111111111111111, b = 1.0, c = 0;
    int i = 0;
    do
    {
        b = 10 * b + 1;
        a = 10 * a;
        i++;
        c = a - b;
    }
    while (c > 0);
    printf("%d", i);
    return 0;
}