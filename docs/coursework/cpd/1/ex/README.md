# 石头剪刀布

## 功能

- 主菜单；
- 本地双人对战；
- 更清晰的用户界面；
- 多平台支持；
- ……

## 备注

Source Code为Windows版可执行文件的工程文件，使用Microsoft Visual Studio Ultimate 2013制作。

生成UNIX版可执行文件时，将所有的`system("cls");`替换为了`printf("\x1b[H\x1b[2J");`。