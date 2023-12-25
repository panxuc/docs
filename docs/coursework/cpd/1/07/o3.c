#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, n, n1, n2, i;
    int s1[6] = {0}, s2[6] = {0};
    int c1[6] = {0}, c2[6] = {0};
    printf("满足条件的数有：\n");
    for(a = 1; a <= 3; a++)
        for(b = 0; b <= 9; b++)
            if(a != b)
                for(c = 0; c <= 9; c++)
                    if(c != a && c != b)
                        for(d = 0; d <= 9; d++)
                            if(d != a && d != b && d != c)
                                for(e = 0; e <= 9; e++)
                                    if(e != a && e != b && e != c && e != d)
                                        for(f = 0; f <= 9; f++)
                                            if(f != a && f != b && f != c && f != d && f != e)
                                            {
                                                n = a*100000+b*10000+c*1000+d*100+e*10+f;
                                                if(n > 100000 && n < 333333)
                                                {
                                                    for(i = 0; i <= 5; i++)
                                                    {
                                                        c1[i] = 0;
                                                        c2[i] = 0;
                                                    }
                                                    n1 = n * 2;
                                                    n2 = n * 3;
                                                    for(i = 0; i <= 5; i++)
                                                    {
                                                        s1[i] = n1 % 10;
                                                        n1 /= 10;
                                                    }
                                                    for(i = 0; i <= 5; i++)
                                                    {
                                                        s2[i] = n2 % 10;
                                                        n2 /= 10;
                                                    }
                                                    for(i = 0; i <= 5; i++)
                                                    {
                                                        if(s1[i] == a) c1[0]++;
                                                        if(s1[i] == b) c1[1]++;
                                                        if(s1[i] == c) c1[2]++;
                                                        if(s1[i] == d) c1[3]++;
                                                        if(s1[i] == e) c1[4]++;
                                                        if(s1[i] == f) c1[5]++;
                                                        if(s2[i] == a) c2[0]++;
                                                        if(s2[i] == b) c2[1]++;
                                                        if(s2[i] == c) c2[2]++;
                                                        if(s2[i] == d) c2[3]++;
                                                        if(s2[i] == e) c2[4]++;
                                                        if(s2[i] == f) c2[5]++;
                                                    }
                                                    if(c1[0]&&c1[1]&&c1[2]&&c1[3]&&c1[4]&&c1[5])
                                                        if(c2[0]&&c2[1]&&c2[2]&&c2[3]&&c2[4]&&c2[5])
                                                            printf("%d\n", n);
                                                }
                                            }
    return 0;
}