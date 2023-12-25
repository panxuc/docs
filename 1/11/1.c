#include <stdio.h>
void sort(int ar[], int n)
{
    int i, j, t;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - 1 - i; j++)
            if(*(ar + j) > *(ar + j + 1))
            {
                t = *(ar + j);
                *(ar + j) = *(ar + j + 1);
                *(ar + j + 1) = t;
            }
}
int main()
{
    int a[10] = {0}, b[10] = {0}, c[20] = {0};
    int i;
    int *p = a, *q = b, *r = c;
    for(i = 0; i < 10; i++)
        scanf("%d", a + i);
    for(i = 0; i < 10; i++)
        scanf("%d", b + i);
    sort(a, 10); sort(b, 10);
    while((p - a) < 10 || (q - b) < 10)
    {
        if((p - a) == 10)
        {
            *r = *q;
            q++; r++;
        }
        else if((q - b) == 10)
        {
            *r = *p;
            p++; r++;
        }
        else if(*p < *q)
        {
            *r = *p;
            p++; r++;
        }
        else
        {
            *r = *q;
            q++; r++;
        }
    }
    for(i = 0; i < 20; i++)
        printf("%d ", *(c + i));
    return 0;
}