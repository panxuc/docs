#include <stdio.h>
int main()
{
    int x1, x2;                 //定义整型变量x1, x2
    unsigned y;                 //定义无符号整型变量y
    char c1, c2;                //定义字符型变量c1, c2
    x1 = 65535;                 //x1赋值为65535
    x2 = x1 + 5;                //x2赋值为x1 + 5
    printf("enter y: ");        //输出“enter y: ”
    scanf("%u", &y);            //输入y的值
    c1 = 97;                    //c1赋值为97，即'a'
    c2 = 'A';                   //c2赋值为'A'
    c2 = c2 + 32;               //将c2转换为'a'
    printf("x1=%d ", x1);       //输出x1
    printf("x2=%d ", x2);       //输出x2
    printf("y=%u ", (y + 15));  //输出y
    printf("c1=%c ", c1);       //输出c1
    printf("c2=%c\n", c2);      //输出c2
    return(0);
}