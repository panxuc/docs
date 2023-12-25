#include <stdio.h>
int main()
{
    int a = 1, b = 1, c = 1, d = 1, e = 1;
    int max = 0;
    while(c == a || c == b)
        c++;
    while(d == a || d == b || d == c)
        d++;
    while(e == a || e == d)
        e++;
    if(a > max) max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    if(e > max) max = e;
    printf("至少需要%d种颜色\n", max);
    printf("A:%d\n", a);
    printf("B:%d\n", b);
    printf("C:%d\n", c);
    printf("D:%d\n", d);
    printf("E:%d\n", e);
    return 0;
}