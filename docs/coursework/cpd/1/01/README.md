# 第一次作业

## 必做题

原文件

```c
#include “stdio.h”;
main()
{  int a,b;
    c=getchar()
    scanf("%d%d",&a,&b);
    putchar(c);
    printf("%d,%d\n",a,b)
    system(“pause”);
}
```

##### `Visual Studio Premium 2012, Debug Win32 @ Microsoft Windows 7 Professional Service Pack 1`

```sh
1>------ 已启动全部重新生成: 项目: XXX, 配置: Debug Win32 ------
1>  XXX.c
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(1): warning C4067: 预处理器指令后有意外标记 - 应输入换行符
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(5): error C2065: “c”: 未声明的标识符
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(6): error C2146: 语法错误: 缺少“;”(在标识符“scanf”的前面)
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(7): error C2065: “c”: 未声明的标识符
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(9): error C2146: 语法错误: 缺少“;”(在标识符“system”的前面)
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(9): warning C4013: “system”未定义；假设外部返回 int
1>c:\users\xuc\documents\visual studio 2012\projects\XXX\XXX\XXX.c(9): error C2065: ““pause””: 未声明的标识符
========== 全部重新生成: 成功 0 个，失败 1 个，跳过 0 个 ==========
```

##### `Visual Studio Code, G++ @ Microsoft Windows 11 Pro`

```sh
 *  正在执行任务: C/C++: g++.exe 生成活动文件 

正在启动生成...
D:\msys64\mingw64\bin\g++.exe -fdiagnostics-color=always -g D:\Test\C\XXX.c -o D:\Test\C\XXX.exe
D:\Test\C\XXX.c:1:19: warning: extra tokens at end of #include directive
    1 | #include "stdio.h";
      |                   ^
D:\Test\C\XXX.c: In function 'int main()':
D:\Test\C\XXX.c:5:9: error: 'c' was not declared in this scope
    5 |         c=getchar()
      |         ^
D:\Test\C\XXX.c:8:30: error: expected ';' before 'system'
    8 |         printf("%d,%d\n",a,b)
      |                              ^
      |                              ;
    9 |         system("pause");
      |         ~~~~~~                

生成已完成，但出现错误。

 *  终端进程已终止，退出代码: -1。 
 *  终端将被任务重用，按任意键关闭。 
 
```

##### `Visual Studio Code, GCC @ Microsoft Windows 11 Pro`

```sh
 *  正在执行任务: C/C++: gcc.exe 生成活动文件 

正在启动生成...
D:\msys64\mingw64\bin\gcc.exe -fdiagnostics-color=always -g D:\Test\C\XXX.c -o D:\Test\C\XXX.exe
D:\Test\C\XXX.c:1:19: warning: extra tokens at end of #include directive
    1 | #include "stdio.h";
      |                   ^
D:\Test\C\XXX.c:2:1: warning: return type defaults to 'int' [-Wimplicit-int]
    2 | main()
      | ^~~~
D:\Test\C\XXX.c: In function 'main':
D:\Test\C\XXX.c:5:9: error: 'c' undeclared (first use in this function)
    5 |         c=getchar()
      |         ^
D:\Test\C\XXX.c:5:9: note: each undeclared identifier is reported only once for each function it appears in
D:\Test\C\XXX.c:5:20: error: expected ';' before 'scanf'
    5 |         c=getchar()
      |                    ^
      |                    ;
    6 |         scanf("%d%d",&a,&b);
      |         ~~~~~       
D:\Test\C\XXX.c:8:30: error: expected ';' before 'system'
    8 |         printf("%d,%d\n",a,b)
      |                              ^
      |                              ;
    9 |         system("pause");
      |         ~~~~~~                

生成已完成，但出现错误。

 *  终端进程启动失败(退出代码: -1)。 
 *  终端将被任务重用，按任意键关闭。 

```

##### `Code App, Clang @ iPadOS 15.6.1`

```sh
/private/var/mobile/Containers/Data/Application/BE86F901-B36A-4B02-B580-4471FE94F3C6/Documents/XXX.c:1:19: warning:
      extra tokens at end of #include directive [-Wextra-tokens]
#include "stdio.h";
                  ^
                  //
/private/var/mobile/Containers/Data/Application/BE86F901-B36A-4B02-B580-4471FE94F3C6/Documents/XXX.c:2:1: warning:
      type specifier missing, defaults to 'int'[-Wimplicit-int]
main()
^
/private/var/mobile/Containers/Data/Application/BE86F901-B36A-4B02-B580-4471FE94F3C6/Documents/XXX.c:5:5: error:
      use of undeclared identifier 'c'
    c=getchar()
    ^
/private/var/mobile/Containers/Data/Application/BE86F901-B36A-4B02-B580-4471FE94F3C6/Documents/XXX.c:7:13: error:
      use of undeclared identifier 'c'
    putchar(c);
            ^
/private/var/mobile/Containers/Data/Application/BE86F901-B36A-4B02-B580-4471FE94F3C6/Documents/XXX.c:8:29: error:
      expected ';' after expression
    printf("%d, %d\n", a, b)
                            ^
                            ;
/private/var/mobile/Containers/Data/Application/BE86F901-B36A-4B02-B580-4471FE94F3C6/Documents/XXX.c:9:5: warning:
      implicit declaration of function 'system' is invalid in C99 [-Wimplicit-function-declaration]
    system("pause");
    ^
2 warnings and 3 errors generated.
```

修改后

```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	c = getchar();
	scanf("%d%d", &a, &b);
	putchar(c);
	printf("%d, %d\n", a, b);
	system("pause");
}
```

## 选做题

### 6-1

```c
#include <stdio.h>
#include <math.h>
```

### 6-2

```sh
20 30XY
```

### 6-7

```c
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if( c >= 'a' && c <= 'z' )
        c = c + 'A' - 'a';
    printf("%c\n", c);
    return 0;
}
```

