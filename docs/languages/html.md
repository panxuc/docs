---
comments: true
---

# HTML

## 基本语法

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

``` html title="段落"
<p>段落</p>
```

<div class="result">
<p>段落</p>
</div>

``` html title="链接"
<a href="https://www.panxuc.com">Xuc Pan 的主页</a>
```

<div class="result">
<a href="https://www.panxuc.com">Xuc Pan 的主页</a>
</div>

``` html title="图片"
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
```

<div class="result">
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</div>

``` html title="列表"
<ul>
  <li>列表项</li>
  <li>列表项</li>
  <li>列表项</li>
</ul>
<ol>
  <li>列表项</li>
  <li>列表项</li>
  <li>列表项</li>
</ol>
```

<div class="result">
<ul>
  <li>列表项</li>
  <li>列表项</li>
  <li>列表项</li>
</ul>
<ol>
  <li>列表项</li>
  <li>列表项</li>
  <li>列表项</li>
</ol>
</div>

``` html title="表格"
<table>
  <thead>
    <tr>
      <th>表头</th>
      <th>表头</th>
      <th>表头</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>表格单元</td>
      <td>表格单元</td>
      <td>表格单元</td>
    </tr>
    <tr>
      <td>表格单元</td>
      <td>表格单元</td>
      <td>表格单元</td>
    </tr>
    <tr>
      <td>表格单元</td>
      <td>表格单元</td>
      <td>表格单元</td>
    </tr>
  </tbody>
</table>
```

<div class="result">
<table>
  <thead>
    <tr>
      <th>表头</th>
      <th>表头</th>
      <th>表头</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>表格单元</td>
      <td>表格单元</td>
      <td>表格单元</td>
    </tr>
    <tr>
      <td>表格单元</td>
      <td>表格单元</td>
      <td>表格单元</td>
    </tr>
    <tr>
      <td>表格单元</td>
      <td>表格单元</td>
      <td>表格单元</td>
    </tr>
  </tbody>
</table>
</div>

``` html title="代码"
<pre><code class="language-html">&lt;div class="container"&gt;
  &lt;div class="row"&gt;
    &lt;div class="col-md-12"&gt;
      &lt;h1&gt;标题&lt;/h1&gt;
    &lt;/div&gt;
  &lt;/div&gt;
&lt;/div&gt;</code></pre>
```

<div class="result">
<pre><code class="language-html">&lt;div class="container"&gt;
  &lt;div class="row"&gt;
    &lt;div class="col-md-12"&gt;
      &lt;h1&gt;标题&lt;/h1&gt;
    &lt;/div&gt;
  &lt;/div&gt;
&lt;/div&gt;</code></pre>
</div>

## `<input>` 输入

不同浏览器对 `<input>` 的默认样式不同，不是所有浏览器都支持所有的 `<input>` 类型。

``` html title="文本（默认值）"
<input type="text" placeholder="文本">
```

<div class="result">
<input type="text" placeholder="文本">
</div>

``` html title="按钮"
<input type="button" value="按钮">
```

<div class="result">
<input type="button" value="按钮">
</div>

``` html title="多选"
<input type="checkbox" name="checkbox" id="checkbox1" checked>
<label for="checkbox1">多选</label>
<input type="checkbox" name="checkbox" id="checkbox2">
<label for="checkbox2">多选</label>
```

<div class="result">
<input type="checkbox" name="checkbox" id="checkbox1" checked>
<label for="checkbox1">多选</label>
<input type="checkbox" name="checkbox" id="checkbox2">
<label for="checkbox2">多选</label>
</div>

``` html title="颜色"
<input type="color" value="#000000">
```

<div class="result">
<input type="color" value="#000000">
</div>

``` html title="日期"
<input type="date" value="2019-01-01">
```

<div class="result">
<input type="date" value="2019-01-01">
</div>

``` html title="日期时间"
<input type="datetime-local" value="2019-01-01T00:00:00">
```

<div class="result">
<input type="datetime-local" value="2019-01-01T00:00:00">
</div>

``` html title="邮箱"
<input type="email" placeholder="邮箱">
```

<div class="result">
<input type="email" placeholder="邮箱">
</div>

``` html title="文件"
<input type="file">
```

<div class="result">
<input type="file">
</div>

``` html title="隐藏"
<input type="hidden" value="隐藏">
```

<div class="result">
<input type="hidden" value="隐藏">
</div>

``` html title="图像"
<input type="image" src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
```

<div class="result">
<input type="image" src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</div>

``` html title="月份"
<input type="month" value="2019-01">
```

<div class="result">
<input type="month" value="2019-01">
</div>

``` html title="数字"
<input type="number" value="1">
```

<div class="result">
<input type="number" value="1">
</div>

``` html title="密码"
<input type="password" placeholder="密码">
```

<div class="result">
<input type="password" placeholder="密码">
</div>

``` html title="单选"
<input type="radio" name="radio" id="radio1" checked>
<label for="radio1">单选</label>
<input type="radio" name="radio" id="radio2">
<label for="radio2">单选</label>
```

<div class="result">
<input type="radio" name="radio" id="radio1" checked>
<label for="radio1">单选</label>
<input type="radio" name="radio" id="radio2">
<label for="radio2">单选</label>
</div>

``` html title="范围"
<input type="range" min="0" max="100" value="50">
```

<div class="result">
<input type="range" min="0" max="100" value="50">
</div>

``` html title="重置"
<input type="reset" value="重置">
```

<div class="result">
<input type="reset" value="重置">
</div>

``` html title="搜索"
<input type="search" placeholder="搜索">
```

<div class="result">
<input type="search" placeholder="搜索">
</div>

``` html title="电话"
<input type="tel" placeholder="电话">
```

<div class="result">
<input type="tel" placeholder="电话">
</div>

``` html title="文本"
<input type="text" placeholder="文本">
```

<div class="result">
<input type="text" placeholder="文本">
</div>

``` html title="时间"
<input type="time" value="00:00:00">
```

<div class="result">
<input type="time" value="00:00:00">
</div>

``` html title="URL"
<input type="url" placeholder="URL">
```

<div class="result">
<input type="url" placeholder="URL">
</div>

``` html title="星期"
<input type="week" value="2019-W01">
```

<div class="result">
<input type="week" value="2019-W01">
</div>