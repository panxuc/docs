#include <stdio.h>
void sort(int ar[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(ar[j] > ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[3] = {0};
    scanf("%d %d %d", a, a+1, a+2);
    sort(a, 3);
    if(a[0] + a[1] <= a[2])
    {
        printf("Not triangle\n");
    }
    else if(a[0] == a[1] && a[1] == a[2])
    {
        printf("Equilateral triangle\n");
    }
    else if(a[0] == a[1] || a[1] == a[2])
    {
        printf("Isosceles triangle\n");
    }
    else
    {
        printf("Triangle\n");
    }
    return 0;
}