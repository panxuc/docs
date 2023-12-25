#include <stdio.h>
double A[4][4] = {1.1161, 0.1254, 0.1397, 0.1490,
                  0.1582, 1.1675, 0.1768, 0.1871,
                  0.2368, 0.2471, 0.2568, 1.2671,
                  0.1968, 0.2071, 1.2168, 0.2271};
double B[4] = {1.5471, 1.6471, 1.8471, 1.7471};
double x[4] = {0};
int main()
{
    int i, j, k;
    double t, r;
    for(i = 0; i <= 3; i++)
    {
        t = A[i][i];
        for(j = 0; j <= 3; j++)
            A[i][j] /= t;
        B[i] /= t;
        if(i < 3)
        {
            for(j = i + 1; j <= 3; j++)
            {
                r = A[j][i];
                for(k = 0; k <= 3; k++)
                {
                    A[j][k] -= r * A[i][k];
                }
                B[j] -= r * B[i];
            }
        }
    }
    for(i = 3; i >= 0; i--)
    {
        x[i] = B[i];
        if(i < 3)
        {
            for(j = 3; j > i; j--)
                x[i] -= A[i][j] * x[j];
        }
    }
    for(i = 0; i <= 3; i++)
    {
        printf("x(%d)=%lf\n", i + 1, x[i]);
    }
    return 0;
}