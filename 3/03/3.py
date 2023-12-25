# 第三次作业：
# 使用面向对象的编程实现加密解密：将一个长度不小于10的英文字符串输入，
# 用户选择任意一个整数K，实现将英文字符串原文中的每个字母(例如A)替换为
# 26个英文字母中A之后的第K个位置的字母(例如K=2时A替换为C)，标点
# 和空格不更改；随后对加密后的信息进行解密。
# 具体要求：
# 	①从键盘输入整数K对不合法的输入进行处理。输入K后，程序自动显示加
# 	密及解密结果。
# 	②要求能够处理字母替换的循环（如z+1=a），以及大小写情况。

# 加密解密类
class Cipher:
    # 初始化方法
    def __init__(self, text, K):
        self.text = text # 原文
        self.K = K # 移位数
        self.cipher = "" # 密文
        self.plain = "" # 解密后的明文

    # 加密方法
    def encrypt(self):
        for char in self.text: # 遍历原文中的每个字符
            if char.isalpha(): # 如果是字母
                if char.isupper(): # 如果是大写字母
                    # 将字母转换为 ASCII 码，加上 K，对 26 取余，再转换为字母
                    new_char = chr((ord(char) - ord('A') + self.K) % 26 + ord('A'))
                else: # 如果是小写字母
                    # 将字母转换为 ASCII 码，加上 K，对 26 取余，再转换为字母
                    new_char = chr((ord(char) - ord('a') + self.K) % 26 + ord('a'))
            else: # 如果不是字母，保持不变
                new_char = char
            self.cipher += new_char # 将新字符添加到密文中
        return self.cipher # 返回密文

    # 解密方法
    def decrypt(self):
        for char in self.cipher: # 遍历密文中的每个字符
            if char.isalpha(): # 如果是字母
                if char.isupper(): # 如果是大写字母
                    # 将字母转换为 ASCII 码，减去 K，对 26 取余，再转换为字母
                    new_char = chr((ord(char) - ord('A') - self.K) % 26 + ord('A'))
                else: # 如果是小写字母
                    # 将字母转换为 ASCII 码，减去 K，对 26 取余，再转换为字母
                    new_char = chr((ord(char) - ord('a') - self.K) % 26 + ord('a'))
            else: # 如果不是字母，保持不变
                new_char = char
            self.plain += new_char # 将新字符添加到明文中
        return self.plain # 返回明文

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
