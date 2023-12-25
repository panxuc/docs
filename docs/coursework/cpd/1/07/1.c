#include <stdio.h>
#include <math.h>
double f(double x)
{
    double ret;
    ret = pow(exp(1.0), -x*x);
    return ret;
}
double S(double a, double b, int m)
{
    double h = (b - a) / m;
    int k = 1;
    double sum = 0.0;
    double ret;
    for(k = 1; k < m; k++)
        sum += f(a + (k * h));
    ret = (( f(a) + f(b) ) / 2 + sum) * h;
    return ret;
}
int main()
{
    int m = 1000;
    for(m = 1000;; m++)
    {
        printf("S=%.4lf, m=%d\n", S(-1.0, 1.0, m), m);
        if(fabs(S(-1.0, 1.0, m) - S(-1.0, 1.0, m - 1)) < 1e-4) break;
    }
    return 0;
}