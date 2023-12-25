#include <stdio.h>
int a[3][3] = {0};
int checkRepeat(int m, int n)
{
    int i, j, ret = 1;
    for(i = 0; i <= m; i++)
        for(j = 0; i == m ? j < n : j <= 2; j++)
            if(a[i][j] == a[m][n]) ret = 0;
    return ret;
}
int checkRow()
{
    int i, ret = 1;
    for(i = 0; i <= 2; i++)
        if(a[i][0] + a[i][1] + a[i][2] != 15) ret = 0;
    return ret;
}
int checkColumn()
{
    int i, ret = 1;
    for(i = 0; i <= 2; i++)
        if(a[0][i] + a[1][i] + a[2][i] != 15) ret = 0;
    return ret;
}
int checkDiagonal()
{
    int ret = 1;
    if(a[0][0] + a[1][1] + a[2][2] != 15 || a[2][0] + a[1][1] + a[0][2] != 15) ret = 0;
    return ret;
}
void showShowWay()
{
    int i, j;
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            printf("%2d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    for(a[0][0] = 1; a[0][0] <= 9; a[0][0]++)
        for(a[0][1] = 1; a[0][1] <= 9; a[0][1]++)
        if(checkRepeat(0, 1))
            for(a[0][2] = 1; a[0][2] <= 9; a[0][2]++)
            if(checkRepeat(0, 2))
                for(a[1][0] = 1; a[1][0] <= 9; a[1][0]++)
                if(checkRepeat(1, 0))
                    for(a[1][1] = 1; a[1][1] <= 9; a[1][1]++)
                    if(checkRepeat(1, 1))
                        for(a[1][2] = 1; a[1][2] <= 9; a[1][2]++)
                        if(checkRepeat(1, 2))
                            for(a[2][0] = 1; a[2][0] <= 9; a[2][0]++)
                            if(checkRepeat(2, 0))
                                for(a[2][1] = 1; a[2][1] <= 9; a[2][1]++)
                                if(checkRepeat(2, 1))
                                    for(a[2][2] = 1; a[2][2] <= 9; a[2][2]++)
                                    if(checkRepeat(2, 2))
                                        if(checkRow() && checkColumn() && checkDiagonal())
                                            showShowWay();
    return 0;
}