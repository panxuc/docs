#include <stdio.h>
int main()
{
    double a, b, c, d;
    double o1, o2;
    char symbol;
    scanf("%c", &symbol);
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    if((b == 0 || d == 0) || (symbol == '/' && c == 0))
        printf("input error\n");
    else
    {
        switch(symbol)
        {
            case '+':
                o1 = (a/b)+(c/d);
                o2 = a+b+c+d;
                printf("%lf %lf", o1, o2);
                break;
            case '-':
                o1 = (a/b)-(c/d);
                o2 = a-b-c-d;
                printf("%lf %lf", o1, o2);
                break;
            case '*':
                o1 = (a/b)*(c/d);
                o2 = a*b*c*d;
                printf("%lf %lf", o1, o2);
                break;
            case '/':
                o1 = (a/b)/(c/d);
                o2 = a/b/c/d;
                printf("%lf %lf", o1, o2);
                break;
            default:
                printf("input error\n");
                break;
        }
    }
    return 0;
}