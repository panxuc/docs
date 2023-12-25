#include <stdio.h>
#define N 10
struct fraction
{
    long long int numerator;
    unsigned long long int denominator;
};
struct fraction Fra_Red(struct fraction f)
{
    int i = 2;
    while(i <= f.denominator)
    {
        if(f.denominator % i == 0 && f.numerator % i == 0)
        {
            f.denominator /= i;
            f.numerator /= i;
            i = 2;
        }
        i++;
    }
    return f;
}
struct fraction Fra_Add(struct fraction f1, struct fraction f2)
{
    struct fraction ret;
    if(f1.denominator == 0 || f2.denominator == 0)
    {
        ret.denominator = 0;
        ret.numerator = 0;
    }
    else
    {
        ret.denominator = f1.denominator * f2.denominator;
        ret.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
        ret = Fra_Red(ret);
    }
    return ret;
}
struct fraction Fra_Sub(struct fraction f1, struct fraction f2)
{
    struct fraction ret;
    if(f1.denominator == 0 || f2.denominator == 0)
    {
        ret.denominator = 0;
        ret.numerator = 0;
    }
    else
    {
        ret.denominator = f1.denominator * f2.denominator;
        ret.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
        ret = Fra_Red(ret);
    }
    return ret;
}
int main()
{
    struct fraction f = {4, 1}, sum = {0, 1};
    double sumValue = 0.0;
    int i = 1;
    for(i = 1; i <= N; i++)
    {
        f.denominator = 2 * i - 1;
        if(i % 2) sum = Fra_Add(sum, f);
        else sum = Fra_Sub(sum, f);
    }
    sumValue = (double)sum.numerator / (double)sum.denominator;
    printf("%lld/%llu\n", sum.numerator, sum.denominator);
    printf("%lf\n", sumValue);
    return 0;
}