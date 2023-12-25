#include <stdio.h>
int main()
{
    int n;
    int cnt5 = 0, cnt6 = 0, cnt7 = 0;
    scanf("%d", &n);
    do
    {
        switch(n % 10)
        {
        case 5:
            cnt5++;
            break;
        case 6:
            cnt6++;
            break;
        case 7:
            cnt7++;
            break;
        default:
            break;
        }
        n /= 10;
    } while (n != 0);
    printf("%d %d %d", cnt5, cnt6, cnt7);
}