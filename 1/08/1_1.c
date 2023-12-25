#include <stdio.h>
int a[40] = {0};
int sum = 40;
void suicide(int n)
{
    int cnt = 0;
    while(sum > 1)
    {
        n++;
        if(n > 39) n -= 40;
        if(!a[n])
            cnt++;
        if(cnt == 3)
        {
            a[n] = 1;
            sum--;
            suicide(n);
        }
    }
}
int main()
{
    int i;
    suicide(-1);
    for(i = 0; i <= 39; i++)
    {
        if(!a[i])
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}