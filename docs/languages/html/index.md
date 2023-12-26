---
comments: true
---

# HTML

超文本标记语言（**H**yper**T**ext **M**arkup **L**anguage，HTML）是一种用于创建网页的标准标记语言。

HTML 元素是构建网站的基石。HTML 允许嵌入图像与对象，并且可以用于创建交互式表单，它被用来结构化信息——例如标题、段落和列表等等，也可用来在一定程度上描述文档的外观和语义。

HTML 可以嵌入如 JavaScript 的脚本语言，它们会影响 HTML 网页的行为。网页浏览器也可以引用层叠样式表（CSS）来定义文本和其它元素的外观与布局。

## 基本结构

``` html title="基本结构"
<!DOCTYPE html>
<html lang="zh-CN">
<head>
  <meta charset="UTF-8">
  <title>标题</title>
</head>
<body>
  <h1>标题</h1>
  <p>段落</p>
</body>
</html>
```

- `<!DOCTYPE html>`：文档类型，告诉浏览器使用 HTML5 规范解析文档。
- `<html lang="zh-CN">`：根元素，告诉浏览器文档使用的语言。
- `<head>`：文档头部，包含文档的元数据。
- `<meta charset="UTF-8">`：字符编码，告诉浏览器文档使用的字符编码。
- `<title>`：文档标题，显示在浏览器的标题栏或页面标签上。
- `<body>`：文档主体，包含可见的页面内容。
- `<h1>`：标题，从 1 到 6 分别表示不同级别的标题。
- `<p>`：段落，表示一段文本。



