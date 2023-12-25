# 第二次作业：
# 编写一个读取邮箱数据的程序：在mbox.txt文件中搜索，当找到以“From”和
# “From:”开头的行时，从该行中提取邮箱地址，使用字典dictionary来计算每个
# 邮箱发送的消息数。读取完mbox.txt中的所有数据后，输出发送消息数最多的邮
# 箱的地址。
#
# 具体要求：
# 	①附加任务（供参考选做，不加分）：输出所有发送消息的邮箱地址，并按首
# 	字母表升序排列，不计大小写。

f = open('mbox.txt', 'r')

dictionary = {}

for line in f:
    line = line.rstrip()
    if line.startswith('From') or line.startswith('From:'):
        email = line.split()[1]
        if email in dictionary:
            dictionary[email] += 1
        else:
            dictionary[email] = 1

f.close()

emails = []

for key in dictionary:
    emails.append(key)

emails.sort(key=lambda x: x.lower())

print('所有发送消息的邮箱地址：')
for email in emails:
    print(email)

max_count = 0

max_email = ''

for key, value in dictionary.items():
    if value > max_count:
        max_count = value
        max_email = key

print('发送消息数最多的邮箱地址：', max_email)
print('发送的消息数：', max_count)
