# 第二次作业

## 必做题

### 1

```c
#include <stdio.h>
int main()
{
    short a = 10;
    int b = 100;

    int short_length = sizeof a;
    int int_length = sizeof(b);
    int long_length = sizeof(long);
    int char_length = sizeof(char);

    printf("short=%d, int=%d, long=%d, char=%d\n", short_length, int_length, long_length, char_length);

    return 0;
}
```

程序的运行结果为

```sh
short=2, int=4, long=4, char=1
```

它的含义是：在我的计算机编译环境中，短整型变量`short`占2字节，基本整型变量`int`占4字节，长整型变量`long`占4字节，字符型变量`char`占1字节。

### 2

```c
#include <stdio.h>
int main()
{
    int m = 306587;
    long n =28166459852;
    printf("m=%hd, n=%hd\n", m, n);
    printf("n=%d\n", n);

    return 0;
}
```

程序的运行结果为

```sh
m=-21093, n=4556
n=-1898311220
```

这个结果是错的。错误原因在于`%hd`表示输出一个有符号的短整型数据，即它输出的数据范围是$-32768$ ~ $32767$；`%d`表示输出一个有符号的整型数据，即它输出的数据范围是$-2147483648$ ~ $2147483647$。而程序中`m`、`n`的值显然超出了这一范围。

### 3

```c
#include <stdio.h>
int main()
{
    char num, pre, post;
    scanf("%c", &num);
    pre = num - 1;
    post = num + 1;
    printf("%d\n", num);
    printf("%c %c", pre, post);
    return 0;
}
```

程序的运行结果为

输入`0`

```sh
48
/ 1
```

输入`9`

```sh
57
8 :
```

## 选做题

### 1

```c
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
```

### 2

加密

```c
#include <stdio.h>
int main()
{
    char M[110]={'\0'}, C[110]={'\0'};
    int K;
    scanf("%s", M);
    scanf("%d", &K);
    for(int i = 0; M[i] != '\0'; i++)
        C[i] = (M[i] - 65 + K) % 26 + 65;
    printf("%s\n", C);
    return 0;
}
```
解密

```c
#include <stdio.h>
int main()
{
    char M[110]={'\0'}, C[110]={'\0'};
    int K;
    scanf("%s", C);
    scanf("%d", &K);
    for(int i = 0; C[i] != '\0'; i++)
        M[i] = (C[i] + 26 - 65 - K) % 26 + 65;
    printf("%s\n", M);
    return 0;
}
```