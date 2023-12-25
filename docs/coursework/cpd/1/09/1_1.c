#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int sheep[110] = {0};
    int i = 0, max = 0, j = 0;
    srand((unsigned int)time(NULL));
    for(i = 1; i <= 100; i++)
        sheep[i] = rand();
    for(i = 1; i <= 100; i++)
    {
        if(max < sheep[i])
        {
            max = sheep[i];
            j = i;
        }
    }
    printf("%d %d\n", max, j);
    return 0;
}