# 基本元素

HTML 元素是从开始标签到结束标签的所有代码。

HTML 标签通常是成对出现的，比如 `<p>` 和 `</p>`，也有的标签是自闭合的，比如 `<br>`。

## 标题

标题元素从 `<h1>` 到 `<h6>`，分别表示不同级别的标题。

``` html title="标题"
<h1>标题</h1>
<h2>标题</h2>
<h3>标题</h3>
<h4>标题</h4>
<h5>标题</h5>
<h6>标题</h6>
```

<div class="result">
<h1>标题</h1>
<h2>标题</h2>
<h3>标题</h3>
<h4>标题</h4>
<h5>标题</h5>
<h6>标题</h6>
</div>

### 水平线

可以在标题下面添加一条水平线。

``` html title="水平线"
<hr>
```

<div class="result">
<hr>
</div>

## 段落

没什么好说的，就是段落。

``` html title="段落"
<p>段落</p>
```

<div class="result">
<p>段落</p>
</div>

### 换行符

可以在段落中添加换行符。

``` html title="换行符"
<p>第一行<br>第二行</p>
```

<div class="result">
<p>第一行<br>第二行</p>
</div>

### 文本格式化

可以使用 `<b>`、`<strong>`、`<i>`、`<em>`、`<mark>`、`<small>`、`<del>`、`<ins>`、`<sub>`、`<sup>` 标签对文本进行格式化。

``` html title="文本格式化"
<p>
  <b>粗体</b>
  <strong>粗体</strong>
  <i>斜体</i>
  <em>斜体</em>
  <mark>高亮</mark>
  <small>小号</small>
  <del>删除</del>
  <ins>插入</ins>
  <sub>下标</sub>
  <sup>上标</sup>
</p>
```

<div class="result">
<p>
  <b>粗体</b>
  <strong>粗体</strong>
  <i>斜体</i>
  <em>斜体</em>
  <mark>高亮</mark>
  <small>小号</small>
  <del>删除</del>
  <ins>插入</ins>
  <sub>下标</sub>
  <sup>上标</sup>
</p>
</div>

## 链接

链接元素用于在网页中添加链接。

``` html title="链接"
<a href="https://www.panxuc.com">Xuc Pan 的主页</a>
```

<div class="result">
<a href="https://www.panxuc.com">Xuc Pan 的主页</a>
</div>

### 锚点

可以在网页中添加锚点，然后通过链接跳转到锚点。

``` html title="锚点"
<a href="#anchor">锚点</a>
<p id="anchor">锚点</p>
```

<div class="result">
<a href="#anchor">锚点</a>
<p id="anchor">锚点</p>
</div>

### 图像链接

可以在网页中添加图像链接。

``` html title="图像链接"
<a href="https://www.panxuc.com">
  <img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</a>
```

<div class="result">
<a href="https://www.panxuc.com">
  <img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</a>
</div>

### 下载链接

可以在网页中添加下载链接。

``` html title="下载链接"
<a href="https://docs.panxuc.com/assets/favicon.png" download="favicon.png">下载</a>
```

<div class="result">
<a href="https://docs.panxuc.com/assets/favicon.png" download="favicon.png">下载</a>
</div>

### `target` 属性

可以使用 `target` 属性指定链接的打开方式。

- `_self`：默认值，在当前窗口打开链接。
- `_blank`：在新窗口打开链接。
- `_parent`：在父窗口打开链接。
- `_top`：在顶层窗口打开链接。

``` html title="target 属性"
<a href="https://www.panxuc.com" target="_blank">新窗口</a>
<a href="https://www.panxuc.com" target="_parent">父窗口</a>
<a href="https://www.panxuc.com" target="_top">顶层窗口</a>
```

<div class="result">
<a href="https://www.panxuc.com" target="_blank">新窗口</a>
<a href="https://www.panxuc.com" target="_parent">父窗口</a>
<a href="https://www.panxuc.com" target="_top">顶层窗口</a>
</div>

### `title` 属性

可以使用 `title` 属性指定链接的标题，这样，鼠标悬停在链接上时会显示标题。

``` html title="title 属性"
<a href="https://www.panxuc.com" title="Xuc Pan 的主页">Xuc Pan 的主页</a>
```

<div class="result">
<a href="https://www.panxuc.com" title="Xuc Pan 的主页">Xuc Pan 的主页</a>
</div>

### `rel` 属性

可以使用 `rel` 属性指定链接与当前文档之间的关系。

- `alternate`：当前文档的替代版本。
- `author`：当前文档的作者。
- `bookmark`：当前文档的书签。
- `help`：当前文档的帮助。
- `license`：当前文档的许可证。
- `next`：当前文档的下一章节。
- `nofollow`：当前文档的链接不应该被搜索引擎追踪。
- `noreferrer`：当前文档的链接不应该被搜索引擎追踪，并且不应该向链接的页面发送 HTTP 头部。
- `prefetch`：当前文档的预加载。
- `prev`：当前文档的上一章节。
- `search`：当前文档的搜索功能。
- `tag`：当前文档的标签。

``` html title="rel 属性"
<a href="https://www.panxuc.com" rel="author">Xuc Pan 的主页</a>
```

<div class="result">
<a href="https://www.panxuc.com" rel="author">Xuc Pan 的主页</a>
</div>

## 图像

图像元素用于在网页中添加图像。

``` html title="图像"
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
```

<div class="result">
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</div>

### `src` 属性

可以使用 `src` 属性指定图像的 URL。

``` html title="src 属性"
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
```

<div class="result">
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</div>

### `alt` 属性

可以使用 `alt` 属性指定图像的替代文本，这样，当图像无法显示时，会显示替代文本。

``` html title="alt 属性"
<img src="https://docs.panxuc.com/assets/notexist.png" alt="替代文本">
```

<div class="result">
<img src="https://docs.panxuc.com/assets/notexist.png" alt="替代文本">
</div>

### `width` 属性和 `height` 属性

可以使用 `width` 属性和 `height` 属性指定图像的宽度和高度。

``` html title="width 属性和 height 属性"
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan" width="32" height="32">
```

<div class="result">
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan" width="32" height="32">
</div>
