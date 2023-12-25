# Python课程作业_ 2023小学期-第三次作业

## 加密解密

>  使用面向对象的编程实现加密解密：将一个长度不小于10的英文字符串输入，用户选择任意一个整数`K`，实现将英文字符串原文中的每个字母(例如`A`)替换为26个英文字母中`A`之后的第`K`个位置的字母(例如`K=2`时`A`替换为`C`)，标点和空格不更改；随后对加密后的信息进行解密。

> 具体要求：
> ①从键盘输入整数`K`对不合法的输入进行处理。输入`K`后，程序自动显示加密及解密结果。
> ②要求能够处理字母替换的循环（如`z+1=a`），以及大小写情况。

```python
# 加密解密类
class Cipher:
    def __init__(self, text, K):
        self.text = text # 原文
        self.K = K # 移位数
        self.cipher = "" # 密文
        self.plain = "" # 解密后的明文

    # 加密方法
    def encrypt(self):
        for char in self.text:
            if char.isalpha():
                if char.isupper():
                    new_char = chr((ord(char) - ord('A') + self.K) % 26 + ord('A'))
                else:
                    new_char = chr((ord(char) - ord('a') + self.K) % 26 + ord('a'))
            else:
                new_char = char
            self.cipher += new_char
        return self.cipher

    # 解密方法
    def decrypt(self):
        for char in self.cipher:
            if char.isalpha():
                if char.isupper():
                    new_char = chr((ord(char) - ord('A') - self.K) % 26 + ord('A'))
                else:
                    new_char = chr((ord(char) - ord('a') - self.K) % 26 + ord('a'))
            else:
                new_char = char
            self.plain += new_char
        return self.plain

text = input("请输入一个长度不小于 10 的英文字符串：")

while True:
    try:
        K = int(input("请输入一个整数 K："))
        break
    except ValueError:
        print("输入错误，请输入一个整数！")

cipher = Cipher(text, K)
print("加密后的结果是：", cipher.encrypt())
print("解密后的结果是：", cipher.decrypt())
```

运行结果：

输入

```bash
请输入一个长度不小于 10 的英文字符串：Tsinghua Unversity? Peking University!
请输入一个整数 K：6
```

输出

```bash
加密后的结果是： Zyotmnag Atbkxyoze? Vkqotm Atobkxyoze!
解密后的结果是： Tsinghua Unversity? Peking University!
```

