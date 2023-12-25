from flask import Flask, render_template, request, redirect, url_for, make_response
import pandas as pd
import matplotlib.pyplot as plt

app = Flask(__name__)

# 问卷的问题和选项
questions = [
    {
        "id": 1,
        "type": "text",
        "text": "您的姓名",
        "required": True,
        "options": None
    },
    {
        "id": 2,
        "type": "number",
        "text": "您的年龄",
        "required": True,
        "options": None
    },
    {
        "id": 3,
        "type": "text",
        "text": "您的学号",
        "required": True,
        "options": None
    },
    {
        "id": 4,
        "type": "radio",
        "text": "您的性别",
        "required": True,
        "options": ["男性", "女性", "其他"]
    },
    {
        "id": 5,
        "type": "radio",
        "text": "您的年级",
        "required": True,
        "options": ["大一", "大二", "大三", "大四", "研究生"]
    },
    {
        "id": 6,
        "type": "checkbox",
        "text": "您使用的编程语言",
        "required": False,
        "options": ["Python", "Java", "C++", "JavaScript", "C", "C#", "其他"]
    },
    {
        "id": 7,
        "type": "file",
        "text": "您的代表作品",
        "required": False,
        "options": None
    }
]

results = pd.DataFrame()

def hide_zero(pct):
    if pct == 0:
        return " "
    else:
        return f"{pct:.1f}%"

@app.route("/")
def index():
    return render_template("index.html", questions=questions)

@app.route("/submit", methods=["POST"])
def submit():
    global results
    data = {}
    for question in questions:
        qid = question["id"]
        qtype = question["type"]
        if qtype == "text" or qtype == "number":
            value = request.form.get(str(qid))
            data[qid] = value
        elif qtype == "radio":
            # value = request.form.get(str(qid))
            # data[qid] = value
            # if not value:
            #     return f"Please Check Question {qid}: {question['text']}"
            values = request.form.getlist(str(qid))
            data[qid] = values
            if values and values[-1] == '其他':
                other_value = request.form.get(str(qid) + "_other")
                # data[qid].append(other_value)  # 将其他选项的值添加到列表中
                data[qid][-1] = other_value
                # 如果用户没有输入'其他'选项的值，报错并提示用户
                if not other_value:
                    return f"请输入问题{qid}：{question['text']}的“其他”选项的值！"
        elif qtype == "checkbox":
            values = request.form.getlist(str(qid))
            data[qid] = values
            if values and values[-1] == '其他':
                other_value = request.form.get(str(qid) + "_other")
                # data[qid].append(other_value)  # 将其他选项的值添加到列表中
                data[qid][-1] = other_value
                # 如果用户没有输入'其他'选项的值，报错并提示用户
                if not other_value:
                    return f"请输入问题{qid}：{question['text']}的“其他”选项的值！"
        elif qtype == "file":
            file = request.files.get(str(qid))  # 获取用户上传的文件对象
            if file:  # 如果文件对象存在，保存文件到本地，并将文件名添加到字典中
                filename = file.filename
                file.save(f"./resources/{filename}")
                data[qid] = filename
            else:  # 如果文件对象不存在，将None添加到字典中
                data[qid] = None
    series = pd.Series(data)
    results = results.append(series, ignore_index=True)
    # 重定向到结果界面
    return redirect(url_for('result'))

@app.route("/result")
def result():
    global results
    # 结果为空
    if results.empty:
        return "无数据"
    # 否则，生成图表并显示结果
    else:
        # 对单选题和多选题进行统计，并生成饼图
        for question in questions:
            qid = question["id"]
            qtype = question["type"]
            # 如果是单选题或多选题，进行统计
            if qtype == "radio" or qtype == "checkbox":
                # 获取问题的选项
                options = question["options"]
                # 创建一个空的Series对象，用于存储统计结果
                counts = pd.Series([0] * len(options), index=options)
                for i, row in results.iterrows():
                    values = row[qid]
                    if values:
                        for value in values:
                            if value not in counts.index:
                                counts[value] = 0
                            counts[value] += 1
                # 生成饼图，并保存为图片文件，文件名为问题的id
                plt.rcParams['font.sans-serif'] = ['SimSun']
                plt.figure()
                plt.pie(counts, labels=counts.index, autopct=hide_zero)
                plt.title(f"Question {qid}: {question['text']}")
                plt.savefig(f"./resources/{qid}.png")
        # 返回渲染后的结果界面，传入结果和问题作为参数
        return render_template("result.html", results=results, questions=questions)

@app.route("/resource/<file_name>")
def read_file(file_name):
    if file_name.find('/') > 0:
        return
    image_data = open(f"./resources/{file_name}", 'rb').read()
    res = make_response(image_data)
    res.headers['Content-Type'] = 'image/png'
    return res

if __name__ == "__main__":
    app.run(debug=True)
