#include <stdio.h>
#define MAXMONTH 6
int main()
{
    int month = 1, bigSheep = 0, smallSheep = 2, money = ((bigSheep + smallSheep) * 10), temp = 0;
    printf("月份\t羊数量\t钱\n");
    printf("%d\t%d\t%d\n", month, bigSheep + smallSheep, money);
    for (month = 2; month <= MAXMONTH; month++)
    {
        temp = smallSheep;
        smallSheep = bigSheep;
        bigSheep += temp;
        money = ((bigSheep + smallSheep) * 10);
        printf("%d\t%d\t%d\n", month, bigSheep + smallSheep, money);
    }
    return 0;
}