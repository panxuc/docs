#include <stdio.h>
void sort(int *ar[], int n)
{
    int i, j;
    int *t;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - 1 - i; j++)
            if(**(ar + j) > **(ar + j + 1))
            {
                t = *(ar + j);
                *(ar + j) = *(ar + j + 1);
                *(ar + j + 1) = t;
            }
}
int main()
{
    int a[10] = {0};
    int *pa[10] = {0};
    int i;
    for(i = 0; i < 10; i++)
        pa[i] = &a[i];
    for(i = 0; i < 10; i++)
        scanf("%d", a + i);
    sort(pa, 10);
    for(i = 0; i < 10; i++)
        printf("%d\t", **(pa + i));
    printf("\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", *(pa + i) - a);
    return 0;
}