#include <stdio.h>
int check(int ar[], int n)
{
    int i, ret = 1;
    for(i = 0; i < n; i++)
        if(ar[n] == ar[i])
        {
            ret = 0;
            break;
        }
    return ret;
}
int main()
{
    int a[6];
    int chick = 0, hare = 0;
    for(a[0] = 1; a[0] <= 5; a[0]++)
        for(a[1] = 0; a[1] <= 5; a[1]++)
            if(check(a, 1))
                for(a[2] = 0; a[2] <= 5; a[2]++)
                    if(check(a, 2))
                        for(a[3] = 1; a[3] <= 5; a[3]++)
                            if(check(a, 3))
                                for(a[4] = 0; a[4] <= 5; a[4]++)
                                    if(check(a, 4))
                                        for(a[5] = 0; a[5] <= 5; a[5]++)
                                            if(check(a, 5))
                                            {
                                                chick = a[0]*100 + a[1]*10 + a[2];
                                                hare = a[3]*100 + a[4]*10 + a[5];
                                                if(hare == chick * 2 && hare % 4 == 0)
                                                {
                                                    printf("鸡或兔子的只数为%d，鸡脚有%d支，兔脚有%d支\n", hare / 4, chick, hare);
                                                }
                                            }
    return 0;
}