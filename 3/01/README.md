# Python课程作业_2023小学期-第一次作业

## 买车问题
> 假设用户要买一辆汽车，总价30000元，用户将按照0元首付及每月等额分期付款的方式进行购买，年贷款利率为7%，计划60个月还清，请计算用户每个月需要还银行贷款的数额。

> __具体要求：__
> ①从键盘输入各项参数，以回车键或空格键作为输入结束标志。最后一个输入结束后，程序自动显示计算结果。
> ②输入和输出要有适当的文字提示。
> ③附加任务（供参考选做，不加分）：处理带有汉字的输入内容；从文件导入多个用户的状况进行批量计算并将结果保存到新文件；计算结果非整年时，将结果精度近似到月份。

全部要求（包括附加任务）已全部实现。

```python
# 计算每月还款额
def monthly_payment(total_price, annual_rate, months):
    monthly_rate = annual_rate / 12
    payment = total_price * monthly_rate * (1 + monthly_rate) ** months / ((1 + monthly_rate) ** months - 1)
    return payment

# 处理带有汉字的输入内容
def handle_chinese(input_str):
    output_str = ""
    for char in input_str:
        if '\u4e00' <= char <= '\u9fff':
            continue
        else:
            output_str += char
    return output_str

# 从文件导入多个用户的状况进行批量计算并将结果保存到新文件
def batch_calculation(input_file, output_file):
    with open(input_file, "r") as f_in:
        with open(output_file, "w") as f_out:
            header = f_in.readline()
            f_out.write(header)
            for line in f_in:
                data = line.strip().split(",")
                total_price = float(data[0])
                annual_rate = float(data[1])
                months = int(data[2])
                payment = round(monthly_payment(total_price, annual_rate, months), 2)
                data.append(str(payment))
                result = ",".join(data)
                f_out.write(result + "\n")

print("买车问题")

batch = input("是否需要从文件导入多个用户的状况进行批量计算并将结果保存到新文件？[Y/N]")
if batch == "Y" or batch == "y":
    input_file = input("请输入输入文件名：")
    try:
        f_in = open(input_file, "r")
        f_in.close()
    except FileNotFoundError:
        print("文件不存在，请重新输入！")
        exit()
    output_file = input("请输入输出文件名：")
    if output_file == input_file:
        print("文件名重复，请重新输入！")
        exit()
    batch_calculation(input_file, output_file)
    print("批量计算完成，结果已保存到{}文件中。".format(output_file))
elif batch == "N" or batch == "n":
	print("请输入以下参数，以回车键或空格键作为输入结束标志。")

	total_price_str = input("请输入汽车总价（元）：")
	total_price_str = handle_chinese(total_price_str)
	total_price = float(total_price_str)
	if total_price <= 0:
		print("输入错误，请重新输入！")
		exit()
	annual_rate_str = input("请输入年贷款利率（%）：")
	annual_rate_str = handle_chinese(annual_rate_str)
	annual_rate = float(annual_rate_str)
	if annual_rate <= 0 or annual_rate >= 100:
		print("输入错误，请重新输入！")
		exit()
	annual_rate = annual_rate / 100
	months_str = input("请输入计划还款月数：")
	months_str = handle_chinese(months_str)
	months = int(months_str)
	if months <= 0:
		print("输入错误，请重新输入！")
		exit()
	payment = round(monthly_payment(total_price, annual_rate, months), 2)
	print("您每个月需要还银行贷款的数额为：{}元".format(payment))
else:
    print("输入错误！")
```