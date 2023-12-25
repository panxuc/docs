#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(pow(x-2, 2) + pow(y-2, 2) <= 1)
        printf("10m\n");
    else if(pow(x+2, 2) + pow(y-2, 2) <= 1)
        printf("9m\n");
    else if(pow(x+2, 2) + pow(y+2, 2) <= 1)
        printf("8m\n");
    else if(pow(x-2, 2) + pow(y+2, 2) <= 1)
        printf("7m\n");
    else printf("0m\n");
}