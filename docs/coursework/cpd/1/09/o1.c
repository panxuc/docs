#include <stdio.h>
int checkRepeat(int num, int ar[])
{
    int i = 0, ret = 0;
    while(i < num)
    {
        if(ar[i] == ar[num])
        {
            ret = 1;
            break;
        }
        i++;
    }
    return ret;
}
int checkHappiness(int a, int num, int ar[])
{
    int b[11] = {0};
    int cnt = 0, sum = 0, i;
    while(a > 0)
    {
        b[cnt] = a % 10;
        a /= 10;
        cnt++;
    }
    for(i = 0; i < cnt; i++)
        sum += b[i] * b[i];
    ar[num] = sum;
    if(sum == 1) return 1;
    else if(checkRepeat(num, ar)) return -1;
    else return 0;
}
int main()
{
    int num, i, t;
    int temp[110] = {0};
    scanf("%d", &num);
    if(checkHappiness(num, 0, temp) == 1) printf("1\n");
    else
    {
        for(i = 1; ; i++)
        {
            t = checkHappiness(temp[i - 1], i, temp);
            if(t == 1)
            {
                printf("1\n");
                break;
            }
            if(t == -1)
            {
                printf("0\n");
                break;
            }
        }
    }
    return 0;
}