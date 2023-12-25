#include <stdio.h>
int main()
{
    int chick, cock, hen, flag = 0;
    printf("母鸡\t公鸡\t小鸡\n");
    for(hen = 66; hen > 0; hen--)
    {
        for(cock = 100; cock > 0; cock--)
            for(chick = 200; chick > 0; chick--)
                if(hen + cock + chick == 100 && 15*hen + 10*cock + 5*chick == 1000)
                {
                    printf("%d\t%d\t%d\n", hen, cock, chick);
                    flag = 1;
                }
        if(flag)
            break;
    }
    return 0;
}