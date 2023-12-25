#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i;
    bool a[3] = {0};
    for(i = 0; i <= 2; i++)
    {
        a[i] = 1;
        if(a[0] + a[1] == 1 && a[1] + a[2] == 1 && a[1] + a[2] == 1)
        {
            printf("说谎者是");
            switch (i)
            {
            case 0:
                printf("甲。\n");
                break;
            case 1:
                printf("乙。\n");
                break;
            case 2:
                printf("丙。\n");
                break;
            default:
                break;
            }
            break;
        }
        a[i] = 0;
    }
    return 0;
}