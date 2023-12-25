#include <stdio.h>
void del(int *p, int m);
int main()
{
    int num[50] = {0};      //设置一个保存每人编号数组num[50]
    int n;
    scanf("%d", &n);        //输入n的值
    del(num, n);
    return 0;
}
void del(int *p, int m)
{
    int cnt = 0, sum = m;
    int *q;
    q = p;
    while(sum > 1)
    {
        if(!(*q)) cnt++;
        if(cnt == 3) {*q = 1; sum--; cnt = 0;}
        q++;
        if(q - p >= m) q -= m;
    }
    for(q = p; q - p < m; q++)
        if(!(*q))
        {
            printf("%d\n", (q - p) + 1);
            break;
        }
}
