#include <stdio.h>
#include <math.h>
const long double PI = 3.141592654;
int main()
{
    printf(
        "                x²\n"
        "             - ---\n"
        "         1      2\n"
        "f(x) = ----- e\n"
        "       √(2π)\n"
    );
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    y = (exp(-(pow(x, 2)) / 2))/(sqrt(2 * PI));
    printf("f(x) = %lf", y);
    return 0;
}