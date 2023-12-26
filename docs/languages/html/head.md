---
comments: true
---

# `<head>` 头部

`<head>` 元素包含了所有头部标签元素。头部标签元素包含了文档的元数据，不会在网页中显示。

可以添加在头部区域的元素标签有：

- `<title>`：定义文档的标题，显示在浏览器的标题栏或页面标签上。
- `<base>`：定义页面中所有链接的默认地址或默认目标。
- `<link>`：定义文档与外部资源的关系。
- `<meta>`：定义文档的元数据。
- `<style>`：定义文档的样式信息。
- `<script>`：定义客户端脚本。
- `<noscript>`：定义在脚本未被执行时的替代内容。

## `<title>` 标题

`<title>` 元素定义文档的标题，显示在浏览器的标题栏或页面标签上。

``` html title="标题"
<title>标题</title>
```

## `<base>` 基础

`<base>` 元素为该 HTML 文档中所有的链接规定默认地址或默认目标。

``` html title="基础"
<base href="https://www.panxuc.com/" target="_blank">
```

## `<link>` 链接

`<link>` 元素定义文档与外部资源的关系。

``` html title="链接"
<link rel="stylesheet" type="text/css" href="style.css">
```

## `<meta>` 元数据

`<meta>` 元素定义文档的元数据。

``` html title="元数据"
<meta charset="UTF-8"> <!-- 字符编码 -->
<meta name="viewport" content="width=device-width, initial-scale=1.0"> <!-- 视口 -->
<meta name="keywords" content="HTML, CSS, JavaScript"> <!-- 关键字 -->
<meta name="description" content="HTML 是一种用于创建网页的标准标记语言。"> <!-- 描述 -->
<meta name="author" content="Xuc Pan"> <!-- 作者 -->
<meta name="generator" content="VS Code"> <!-- 生成器 -->
<meta http-equiv="refresh" content="3;url=https://www.panxuc.com"> <!-- 刷新 -->
```

## `<style>` 样式

`<style>` 元素定义文档的样式信息。

``` html title="样式"
<style>
  body {
    background-color: #f0f0f0;
  }
</style>
```

## `<script>` 脚本

`<script>` 元素定义客户端脚本，比如 JavaScript。

``` html title="脚本"
<script>
  console.log('Hello World!');
</script>
```

## `<noscript>` 替代内容

`<noscript>` 元素定义在脚本未被执行时的替代内容。

``` html title="替代内容"
<noscript>
  <p>请启用 JavaScript。</p>
</noscript>
```
