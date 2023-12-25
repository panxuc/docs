#include <stdio.h>
void fun(int a[], int n, int flag)
{
    int t, i, j, k;
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
            if(flag ? a[k] > a[j] : a[k] < a[j])
                k = j;
        if(k != i)
        {
            t = a[k]; a[k] = a[i]; a[i] = t;
        }
    }
}
int main()
{
    int c[10] = {8, 6, 7, 10, 9, 3, 5, 2, 4, 1}, i;
    fun(c, 5, 0);
    fun(c + 5, 5, 1);
    for(i = 0; i < 10; i++)
        printf("%d, ", c[i]);
    return 0;
}