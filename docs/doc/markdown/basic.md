# 基本语法

Markdown 原生语法其实很少，一共只有几种。

以下所有内容均可以用 HTML 语法实现，但 Markdown 语法更加简洁，更加易读易写。

## 标题

Markdown 支持两种标题的语法，类 Setext 和类 atx 形式。

类 Setext 形式是用底线的形式，利用 `=` （最高阶标题）和 `-` （第二阶标题）。

```markdown title="标题（类 Setext 形式）"
这是最高阶标题
====================
这是第二阶标题
--------------------
```

<div class="result">
<h1>这是最高阶标题</h1>
<h2>这是第二阶标题</h2>
</div>

类 atx 形式则是在行首插入 1 到 6 个 `#` ，对应到标题 1 到 6 阶。

```markdown title="标题（类 atx 形式）"
# 这是标题 1
## 这是标题 2
### 这是标题 3
#### 这是标题 4
##### 这是标题 5
###### 这是标题 6
```

<div class="result">
<h1>这是标题 1</h1>
<h2>这是标题 2</h2>
<h3>这是标题 3</h3>
<h4>这是标题 4</h4>
<h5>这是标题 5</h5>
<h6>这是标题 6</h6>
</div>

### 水平线

可以在标题下面添加一条水平线。

```markdown title="水平线"
---
```

<div class="result" markdown>

---

</div>

## 段落

Markdown 段落的前后要有空行，所谓的空行是指没有文字内容，或者只有空白符（空格或制表符）的行。

当然也可以在段落后面使用 `<br>` 标签来换行，但是这个在 Markdown 中并不推荐使用。

```markdown title="段落"
这是第一段。

这是第二段。
```

<div class="result" markdown>

这是第一段。

这是第二段。

</div>

### 文本格式化

Markdown 支持以下文本格式化语法：

```markdown title="文本格式化"
*斜体*
_斜体_
**粗体**
__粗体__
***粗斜体***
___粗斜体___
~~删除线~~
```

<div class="result" markdown>

*斜体*
_斜体_
**粗体**
__粗体__
***粗斜体***
___粗斜体___
~~删除线~~

</div>

## 链接

Markdown 支持两种链接语法：行内式和参考式。

### 行内式

行内式链接语法是把链接的文字用 `[` 和 `]` 包起来，然后紧跟着写上链接的地址。

```markdown title="行内式链接"
[Xuc Pan 的主页](https://www.panxuc.com)
```

<div class="result" markdown>

[Xuc Pan 的主页](https://www.panxuc.com)

</div>

### 参考式

参考式链接语法一般用在比较复杂的链接场景，它的写法是把链接的文字用 `[` 和 `]` 包起来，然后在文字的后面再加上一个 `[链接标记]` ，接着在文件的任意处，可以把这个链接标记的地址定义出来。

```markdown title="参考式链接"
[Xuc Pan 的主页][1]

[1]: https://www.panxuc.com
```

<div class="result" markdown>

[Xuc Pan 的主页][1]

[1]: https://www.panxuc.com

</div>

## 图片

Markdown 图片语法和链接语法很像，只是前面多了一个 `!` 。

```markdown title="图片"
![Xuc Pan 的头像](https://docs.panxuc.com/assets/favicon.png)
```

<div class="result" markdown>

![Xuc Pan 的头像](https://docs.panxuc.com/assets/favicon.png)

</div>

## 列表

Markdown 支持有序列表和无序列表。

### 无序列表

无序列表使用星号、加号或是减号作为列表标记。

```markdown title="无序列表"
* 无序列表项 1
* 无序列表项 2
* 无序列表项 3

+ 无序列表项 1
+ 无序列表项 2
+ 无序列表项 3

- 无序列表项 1
- 无序列表项 2
- 无序列表项 3
```

<div class="result" markdown>

* 无序列表项 1
* 无序列表项 2
* 无序列表项 3

+ 无序列表项 1
+ 无序列表项 2
+ 无序列表项 3

- 无序列表项 1
- 无序列表项 2
- 无序列表项 3

</div>

### 有序列表

有序列表使用数字接着一个英文句点作为列表标记。

```markdown title="有序列表"
1. 有序列表项 1
2. 有序列表项 2
3. 有序列表项 3
```

<div class="result" markdown>

1. 有序列表项 1
2. 有序列表项 2
3. 有序列表项 3

</div>

### 列表嵌套

列表嵌套只需在子列表中的选项前面添加缩进即可。

```markdown title="列表嵌套"
1. 有序列表项 1
    - 无序列表项 1
    - 无序列表项 2
    - 无序列表项 3
2. 有序列表项 2
    - 无序列表项 1
    - 无序列表项 2
    - 无序列表项 3
3. 有序列表项 3
    - 无序列表项 1
    - 无序列表项 2
    - 无序列表项 3
```

<div class="result" markdown>

1. 有序列表项 1
    - 无序列表项 1
    - 无序列表项 2
    - 无序列表项 3
2. 有序列表项 2
    - 无序列表项 1
    - 无序列表项 2
    - 无序列表项 3
3. 有序列表项 3
    - 无序列表项 1
    - 无序列表项 2
    - 无序列表项 3

</div>

## 引用

Markdown 使用 `>` 符号表示引用。

```markdown title="引用"
> 这是一段引用。
```

<div class="result" markdown>

> 这是一段引用。

</div>

### 嵌套引用

Markdown 支持嵌套引用。

```markdown title="嵌套引用"
> 这是一段引用。
> > 这是一段嵌套引用。
```

<div class="result" markdown>

> 这是一段引用。
> > 这是一段嵌套引用。

</div>

## 代码

Markdown 支持两种代码语法：行内式和代码块。

### 行内式

行内式代码使用反引号包裹代码。

```markdown title="行内式代码"
这是一段 `Inline Code`。
```

<div class="result" markdown>

这是一段 `Inline Code`。

</div>

### 代码块

代码块使用 4 个空格或是 1 个制表符缩进。

```markdown title="缩进式代码"
    这是一段缩进式代码。
```

<div class="result" markdown>

    这是一段缩进式代码。

</div>


代码块也可以使用 3 个反引号包裹代码，并且可以指定语言。

````markdown title="代码块"
```python
print("Hello World!")
```
````

<div class="result" markdown>

```python
print("Hello World!")
```

</div>

## 表格

Markdown 使用 `|` 和 `-` 来绘制表格。

```markdown title="表格"
| 表头 1   | 表头 2   | 表头 3   |
| -------- | -------- | -------- |
| 单元格 1 | 单元格 2 | 单元格 3 |
| 单元格 4 | 单元格 5 | 单元格 6 |
```

<div class="result" markdown>

| 表头 1   | 表头 2   | 表头 3   |
| -------- | -------- | -------- |
| 单元格 1 | 单元格 2 | 单元格 3 |
| 单元格 4 | 单元格 5 | 单元格 6 |

</div>

### 对齐方式

可以使用 `:` 来指定对齐方式。

```markdown title="表格对齐方式"
| 表头 1 |  表头 2  | 表头 3 |
| :----- | :------: | -----: |
| 左对齐 | 居中对齐 | 右对齐 |
```

<div class="result" markdown>

| 表头 1 |  表头 2  | 表头 3 |
| :----- | :------: | -----: |
| 左对齐 | 居中对齐 | 右对齐 |

</div>

## 转义

Markdown 使用 `\` 来转义特殊字符。

```markdown title="转义"
\*这不是一段斜体文本\*
```

<div class="result" markdown>

\*这不是一段斜体文本\*

</div>

## 公式

在 MathJax 或 KaTeX 的帮助下，可以在 Markdown 中插入公式。公式语法使用的是 $\LaTeX$ 语法。

Markdown 使用 `$` 来插入公式。

```markdown title="公式"
$E=mc^2$
```

<div class="result" markdown>

$E=mc^2$

</div>

可以使用 `$$` 来插入行间公式。

```markdown title="行间公式"
$$E=mc^2$$
```

<div class="result" markdown>

$$E=mc^2$$

</div>

## 脚注

Markdown 使用 `[^]` 来插入脚注。

```markdown title="脚注"
这是一段带有脚注的文本[^1]。

[^1]: 这是一个脚注。
```

<div class="result" markdown>

这是一段带有脚注的文本[^1]。

[^1]: 这是一个脚注。

</div>

## 目录

Markdown 使用 `[toc]` 来插入目录。

```markdown title="目录"
[toc]
```

<div class="result" markdown>

[toc]

</div>

## HTML

Markdown 支持使用 HTML 语法。

```markdown title="HTML"
<p>这是一段使用 <strong>HTML</strong> <em>语法</em>的<span lang="ja">文本</span>。</p>

<video src="https://docs.panxuc.com/assets/videos/test.mp4" controls="controls" width="100%"></video>
```

<div class="result" markdown>

<p>这是一段使用 <strong>HTML</strong> <em>语法</em>的<span lang="ja">文本</span>。</p>

<video src="https://docs.panxuc.com/assets/videos/test.mp4" controls="controls" width="100%"></video>

</div>
