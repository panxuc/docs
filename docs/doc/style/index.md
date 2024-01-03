# 格式

在写作文档之前，应该了解一些基础的格式规范，以免写出来的文档格式混乱，不利于阅读。

## 标题

标题是文档的重要组成部分，它能够帮助读者快速了解文档的结构，所以标题的格式应该统一，不要随意更改。

大多数标记语言都支持多级标题，但是不要使用太多级的标题。一般来说，文档的标题不应该超过三级；如果文档较长，且无法拆分成多个小文档，可以使用四级标题。

不要越级使用标题，例如，不要使用二级标题后面直接使用四级标题，而应该使用三级标题。

标题在文章中起着重要作用，故而绝对不应该仅仅为了格式化某一段文本而使用标题。

## 空格

在 Markdown、HTML 等标记语言中，为了视觉上的美观，应该在中英文[^1]之间使用空格。

[^1]: 这里的中英文并不仅仅包含中文和英文两种语言，而是分别代指全角字符和半角字符。

### 中英文之间使用空格

在中英文之间应该使用空格，例如：

```markdown
Xuc's Docs 是一个由 Xuc 创建的文档网站。
```

<div class="result" markdown>

Xuc's Docs 是一个由 Xuc 创建的文档网站。

</div>

如果不使用空格，会导致中英文之间过于拥挤，例如：

```markdown
Xuc's Docs是一个由Xuc创建的文档网站。
```

<div class="result" markdown>

Xuc's Docs是一个由Xuc创建的文档网站。

</div>

### 中文与数字之间使用空格

在中文与数字之间应该使用空格，例如：

```markdown
[Xuc 的主页](https://www.panxuc.com/)部署在一台年租金 11.38 美元的服务器上。
```

<div class="result" markdown>

[Xuc 的主页](https://www.panxuc.com/)部署在一台年租金 11.38 美元的服务器上。

</div>

### 全角标点周围不使用空格

在中文标点符号周围不应该使用空格，例如：

```markdown
欢迎来到 Xuc's Docs！本站的所有者是 Xuc。
```

<div class="result" markdown>

欢迎来到 Xuc's Docs！本站的所有者是 Xuc。

</div>

## 拼写

专有名词应该使用正确的拼写，例如：

```markdown title="正确的拼写"
喜欢看《BanG Dream! It's MyGO!!!!!》的 Xuc 用 LaTeX 写了一篇小作文，托管在 GitHub Pages 上。
```

<div class="result" markdown>

喜欢看《BanG Dream! It's MyGO!!!!!》的 Xuc 用 LaTeX 写了一篇小作文，托管在 GitHub Pages 上。

</div>

如果不使用正确的拼写，会显得很不专业。极端情况下，读者可能无法理解你的意思。例如：

```markdown title="大小写错误"
喜欢看《Bang Dream! It's mygo!!!!!》的 xuc 用 Latex 写了一篇小作文，托管在 Github Pages 上。
```

<div class="result" markdown>

喜欢看《Bang Dream! It's mygo!!!!!》的 xuc 用 Latex 写了一篇小作文，托管在 Github Pages 上。

</div>

```markdown title="意义不明"
喜欢看《乃ﾑ刀g d尺ﾓﾑﾶ! ﾉｲ'丂 ﾶﾘgo!!!!!》的 ﾒuc 用 ﾚﾑｲﾓﾒ 写了一篇小作文，托管在 gﾉｲんu乃 ｱﾑgﾓ丂 上。
```

<div class="result" markdown>

喜欢看《乃ﾑ刀g d尺ﾓﾑﾶ! ﾉｲ'丂 ﾶﾘgo!!!!!》的 ﾒuc 用 ﾚﾑｲﾓﾒ 写了一篇小作文，托管在 gﾉｲんu乃 ｱﾑgﾓ丂 上。

</div>