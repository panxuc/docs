#include <stdio.h>
#include <math.h>
int main()
{
    printf(
        "        1\n"
        "f(x) = ---sin(x²+y²)cos(x+y)\n"
        "        3\n"
        );
    double x, y, z;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    z = (sin(pow(x, 2) + pow(y, 2)) * cos(x + y)) / 3;
    printf("f(x) = %lf", z);
    return 0;
}