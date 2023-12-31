# 基本语法

Typst 的语法和 Markdown 有些类似，但是它更加简单。对于 Markdown 用户来说，Typst 的语法应该很容易上手。

## 标题

Typst 的标题是在标题文本前面加上 `=`，同时，如果指定了编号，Typst 会自动为标题添加编号。

```typst
#set heading(numbering: "1.a)")

= 一级标题

== 二级标题
```

<div class="result">
<h1>1) 一级标题</h1>
<h2>1.a) 二级标题</h2>
</div>

## 段落

Typst 的段落和 Markdown 的段落一样，只需要在段落之间加上空行即可。

Typst 还支持使用代码生成段落。

```typst
#for i in range(3) {
  [Blind text #i: ]
  lorem(5)
  parbreak()
}
```

<div class="result">
<p>Blind text 0: Lorem ipsum dolor sit amet, consectetur adipiscing elit. </p>
<p>Blind text 1: Lorem ipsum dolor sit amet, consectetur adipiscing elit. </p>
<p>Blind text 2: Lorem ipsum dolor sit amet, consectetur adipiscing elit. </p>
</div>

### 文本格式化

Typst 的文本格式化功能比 Markdown 更加强大、更加规范、更加灵活。

Typst 支持以下文本格式化语法：

```typst
*粗体*
#strong[粗体]
_斜体_
#emph[斜体]
```

<div class="result">
<p><strong>粗体</strong></p>
<p><em>斜体</em></p>
</div>

其中，可以给粗体和斜体手动设置格式：

```typst
这是*粗体*，这是_斜体_。

#show strong: set text(red)

#show emph: it => {
  text(blue, it.body)
}

这是*粗体*，这是_斜体_。
```

<div class="result">
<p>这是<strong>粗体</strong>，这是<em>斜体</em>。</p>
<p>这是<strong style="color: red">粗体</strong>，这是<span style="color: blue">斜体</span>。</p>
</div>

## 链接

Typst 的链接有以下几种形式：

```typst
#show link: underline

https://www.panxuc.com/

#link(https://www.panxuc.com/)

#link(https://www.panxuc.com/)[Xuc Pan 的主页]
```

<div class="result">
<p><a href="https://www.panxuc.com/" style="text-decoration: underline; color: black">https://www.panxuc.com/</a></p>
<p><a href="https://www.panxuc.com/" style="text-decoration: underline; color: black">https://www.panxuc.com/</a></p>
<p><a href="https://www.panxuc.com/" style="text-decoration: underline; color: black">Xuc Pan 的主页</a></p>
</div>

## 列表

Typst 支持有序列表和无序列表。

### 无序列表

Typst 的无序列表和 Markdown 的无序列表一样，只需要在列表项前面加上 `-` 即可。

```typst
- 列表项 1
- 列表项 2
- 列表项 3
```

<div class="result">
<ul>
<li>列表项 1</li>
<li>列表项 2</li>
<li>列表项 3</li>
</ul>
</div>

或者使用 `list` 命令：

```typst
#list(
  [列表项 1],
  [列表项 2],
  [列表项 3],
)
```

<div class="result">
<ul>
<li>列表项 1</li>
<li>列表项 2</li>
<li>列表项 3</li>
</ul>
</div>

### 有序列表

Typst 的有序列表只需要在列表项前面加上 `+` 即可。

```typst
+ 列表项 1
+ 列表项 2
+ 列表项 3
```

<div class="result">
<ol>
<li>列表项 1</li>
<li>列表项 2</li>
<li>列表项 3</li>
</ol>
</div>

可以手动编号：

```typst
2. 列表项 1
5. 列表项 2
+ 列表项 3
```

<div class="result">
<ol>
<li value="2">列表项 1</li>
<li value="5">列表项 2</li>
<li>列表项 3</li>
</ol>
</div>

或者使用 `enum` 命令：

```typst
#enum[列表项1][列表项2][列表项3]
```

<div class="result">
<ol>
<li>列表项1</li>
<li>列表项2</li>
<li>列表项3</li>
</ol>
</div>

`enum` 命令也支持手动编号：

```typst
#enum(
  enum.item(2)[列表项1],
  enum.item(5)[列表项2],
  enum.item(6)[列表项3]
)
```

<div class="result">
<ol>
<li value="2">列表项1</li>
<li value="5">列表项2</li>
<li value="6">列表项3</li>
</ol>
</div>