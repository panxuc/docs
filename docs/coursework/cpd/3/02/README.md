# Python课程作业_2023小学期\-第二次作业

## 读取邮箱数据

>  编写一个读取邮箱数据的程序：在`mbox.txt`文件中搜索，当找到以“`From`”和“`From:`”开头的行时，从该行中提取邮箱地址，使用字典`dictionary`来计算每个 邮箱发送的消息数。读取完`mbox.txt`中的所有数据后，输出发送消息数最多的邮箱的地址。

> 具体要求：
> ①附加任务（供参考选做，不加分）：输出所有发送消息的邮箱地址，并按首字母表升序排列，不计大小写。

```py
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
```

运行结果：

```bash
所有发送消息的邮箱地址：
a.fish@lancaster.ac.uk
aaronz@vt.edu
ajpoland@iupui.edu
antranig@caret.cam.ac.uk
arwhyte@umich.edu
bahollad@indiana.edu
bkirschn@umich.edu
chmaurer@iupui.edu
colin.clark@utoronto.ca
csev@umich.edu
cwen@iupui.edu
david.horwitz@uct.ac.za
dlhaines@umich.edu
gbhatnag@umich.edu
ggolden@umich.edu
gjthomas@iupui.edu
gopal.ramasammycook@gmail.com
gsilver@umich.edu
hu2@iupui.edu
ian@caret.cam.ac.uk
jimeng@umich.edu
jleasia@umich.edu
jlrenfro@ucdavis.edu
john.ellis@rsmart.com
josrodri@iupui.edu
jzaremba@unicon.net
kimsooil@bu.edu
knoop@umich.edu
ktsao@stanford.edu
lance@indiana.edu
louis@media.berkeley.edu
mbreuker@loi.nl
mmmay@indiana.edu
nuno@ufp.pt
ostermmg@whitman.edu
ray@media.berkeley.edu
rjlowe@iupui.edu
sgithens@caret.cam.ac.uk
ssmail@indiana.edu
stephen.marquard@uct.ac.za
stuart.freeman@et.gatech.edu
thoppaymallika@fhda.edu
tnguyen@iupui.edu
wagnermr@iupui.edu
zach.thomas@txstate.edu
zqian@umich.edu
发送消息数最多的邮箱地址： zqian@umich.edu
发送的消息数： 390
```

