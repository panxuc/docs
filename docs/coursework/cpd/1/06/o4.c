#include <stdio.h>
int main()
{
    int a[6] = {0};
    int cnt = 0;
    for(a[0] = 0; a[0] <= 1; a[0]++)
        for(a[1] = 0; a[1] <= 1; a[1]++)
            for(a[2] = 0; a[2] <= 1; a[2]++)
                for(a[3] = 0; a[3] <= 1; a[3]++)
                    for(a[4] = 0; a[4] <= 1; a[4]++)
                        for(a[5] = 0; a[5] <= 1; a[5]++)
                            if(a[0] + a[1] + a[2] + a[3] + a[4] + a[5] == 3)
                                {
                                    for(int i = 0; i <= 5; i++)
                                    {
                                        printf("%c--", i + 65);
                                        switch (a[i])
                                        {
                                        case 0:
                                            printf("白");
                                            break;
                                        case 1:
                                            printf("黑");
                                            break;
                                        default:
                                            break;
                                        }
                                        if(i != 5) printf("  ");
                                        else printf("\n");
                                    }
                                    cnt++;
                                }
    printf("共%d种。\n", cnt);
    return 0;
}