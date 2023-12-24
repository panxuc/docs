---
comments: true
---

# Typst

Typst 是一种新的标记语言，它比 Markdown 更适合排版，比 LaTeX 更简单。当然，目前 Typst 还处于开发阶段，因此它的功能还不完善，但是它已经可以用于写作了。

## 语法

### 段落

``` markdown title="段落"
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

### 粗体

``` markdown title="粗体"
This is *strong.* \
This is #strong[too.] \

#show strong: set text(red)
And this is *evermore.*
```

<div class="result">
<p>This is <strong>strong.</strong></p>
<p>This is <strong>too.</strong></p>
<p>And this is <strong style="color: red;">evermore.</strong></p>
</div>

### 斜体

``` markdown title="斜体"
This is _emphasized._ \
This is #emph[too.]

#show emph: it => {
  text(blue, it.body)
}

This is _emphasized_ differently.
```

<div class="result">
<p>This is <em>emphasized.</em></p>
<p>This is <em>too.</em></p>
<p>This is <em style="color: blue;">emphasized</em> differently.</p>
</div>

### 代码

```` markdown title="代码"
Adding `rbx` to `rcx` gives
the desired result.

What is ```rust fn main()``` in Rust
would be ```c int main()``` in C.

```rust
fn main() {
    println!("Hello World!");
}
```

This has ``` `backticks` ``` in it
(but the spaces are trimmed). And
``` here``` the leading space is
also trimmed.
````

<div class="result" markdown>

Adding `rbx` to `rcx` gives the desired result.

What is ```fn main()``` in Rust would be ```int main()``` in C.

```rust
fn main() {
    println!("Hello World!");
}
```

This has ``` `backticks` ``` in it (but the spaces are trimmed). And ``` here``` the leading space is also trimmed.

</div>

### 链接

``` markdown title="链接"
#show link: underline

https://example.com \

#link("https://example.com") \
#link("https://example.com")[
  See example.com
]
```

<div class="result">
<p><a href="https://example.com"><u>https://example.com</u></a></p>
<p><a href="https://example.com"><u>https://example.com</u></a></p>
<p><a href="https://example.com"><u>See example.com</u></a></p>
</div>

### 标签

``` markdown title="标签"
#show <a>: set text(blue)
#show label("b"): set text(red)

= Heading <a>
*Strong* #label("b")
```

<div class="result">
<h1><a style="color: blue;">Heading</a></h1>
<p><strong style="color: red;">Strong</strong></p>
</div>

### 引用

``` markdown title="引用"
#set heading(numbering: "1.")
#set math.equation(numbering: "(1)")

= Introduction <intro>
Recent developments in
typesetting software have
rekindled hope in previously
frustrated researchers. @distress
As shown in @results, we ...

= Results <results>
We discuss our approach in
comparison with others.

== Performance <perf>
@slow demonstrates what slow
software looks like.
$ O(n) = 2^n $ <slow>

#bibliography("works.bib")
```

<div class="result">
<h2>1) Introduction</h2>
<p>Recent developments in typesetting software have rekindled hope in previously frustrated researchers. [1] As shown in Section 2, we ...</p>
<h3>2) Results</h3>
<p>We discuss our approach in comparison with others.</p>
<h4>2.1) Performance</h4>
<p>Equation 1 demonstrates what slow software looks like.</p>
<div>
  <div style="float:left">
    <math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
      <mi>O</mi>
      <mo stretchy="false">(</mo>
      <mi>n</mi>
      <mo stretchy="false">)</mo>
      <mo>=</mo>
      <msup>
        <mn>2</mn>
        <mi>n</mi>
      </msup>
    </math>
  </div>
  <div style="float:right">(1)</div>
</div>
<div style="clear:both"></div>
<h2>Bibliography</h2>
<p>[1] B. Aldrin, “An Insight into Bibliographical Distress”.</p>
</div>

### 标题

```markdown title="标题"
#set heading(numbering: "1.a)")

= Introduction
In recent years, ...

== Preliminaries
To start, ...
```

<div class="result">
<h2>1) Introduction</h2>
<p>In recent years, ...</p>
<h3>1.a) Preliminaries</h3>
<p>To start, ...</p>
</div>

### 列表

``` markdown title="无序列表"
Normal list.
- Text
- Math
- Layout
- ...

Multiple lines.
- This list item spans multiple
  lines because it is indented.

Function call.
#list(
  [Foundations],
  [Calculate],
  [Construct],
  [Data Loading],
)
```

<div class="result">
<p>Normal list.</p>
<ul>
  <li>Text</li>
  <li>Math</li>
  <li>Layout</li>
  <li>...</li>
</ul>
<p>Multiple lines.</p>
<ul>
  <li>This list item spans multiple lines because it is indented.</li>
</ul>
<p>Function call.</p>
<ul>
  <li>Foundations</li>
  <li>Calculate</li>
  <li>Construct</li>
  <li>Data Loading</li>
</ul>
</div>

``` markdown title="有序列表"
Automatically numbered:
+ Preparations
+ Analysis
+ Conclusions

Manually numbered:
2. What is the first step?
5. I am confused.
+  Moving on ...

Multiple lines:
+ This enum item has multiple
  lines because the next line
  is indented.

Function call.
#enum[First][Second]
```

<div class="result">
<p>Automatically numbered:</p>
<ol>
  <li>Preparations</li>
  <li>Analysis</li>
  <li>Conclusions</li>
</ol>
<p>Manually numbered:</p>
<ol>
  <li value="2">What is the first step?</li>
  <li value="5">I am confused.</li>
  <li>Moving on ...</li>
</ol>
<p>Multiple lines:</p>
<ol>
  <li>This enum item has multiple lines because the next line is indented.</li>
</ol>
<p>Function call.</p>
<ol>
  <li>First</li>
  <li>Second</li>
</ol>
</div>

### 术语

``` markdown title="术语"
/ Ligature: A merged glyph.
/ Kerning: A spacing adjustment
  between two adjacent letters.
```

<div class="result">
<p><strong>Ligature</strong> A merged glyph.</p>
<p><strong>Kerning</strong> A spacing adjustment between two adjacent letters.</p>
</div>

### 数学公式

``` markdown title="数学公式：变量"
$ A = pi r^2 $
$ "area" = pi dot "radius"^2 $
$ cal(A) :=
    { x in RR | x "is natural" } $
#let x = 5
$ #x < 17 $
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mi>A</mi>
  <mo>=</mo>
  <mi>&#x3C0;</mi>
  <msup>
    <mi>r</mi>
    <mn>2</mn>
  </msup>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext>area</mtext>
  <mo>=</mo>
  <mi>&#x3C0;</mi>
  <mo>&#x22C5;</mo>
  <msup>
    <mtext>radius</mtext>
    <mn>2</mn>
  </msup>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="ORD">
    <mi data-mjx-variant="-tex-calligraphic" mathvariant="script">A</mi>
  </mrow>
  <mo>:=</mo>
  <mo fence="false" stretchy="false">{</mo>
  <mi>x</mi>
  <mo>&#x2208;</mo>
  <mrow data-mjx-texclass="ORD">
    <mi mathvariant="double-struck">R</mi>
  </mrow>
  <mo>&#x2223;</mo>
  <mi>x</mi>
  <mtext>&#xA0;is natural</mtext>
  <mo fence="false" stretchy="false">}</mo>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mn>5</mn>
  <mo>&lt;</mo>
  <mn>17</mn>
</math>
</div>

``` markdown title="数学公式：符号"
$ x < y => x gt.eq.not y $
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mi>x</mi>
  <mo>&lt;</mo>
  <mi>y</mi>
  <mo stretchy="false">&#x21D2;</mo>
  <mi>x</mi>
  <mo>&#x2271;</mo>
  <mi>y</mi>
</math>
</div>

``` markdown title="数学公式：换行"
$ sum_(k=0)^n k
    &= 1 + ... + n \
    &= (n(n+1)) / 2 $
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtable displaystyle="true" columnalign="right left" columnspacing="0em" rowspacing="3pt">
    <mtr>
      <mtd>
        <munderover>
          <mo data-mjx-texclass="OP">&#x2211;</mo>
          <mrow data-mjx-texclass="ORD">
            <mi>k</mi>
            <mo>=</mo>
            <mn>0</mn>
          </mrow>
          <mi>n</mi>
        </munderover>
        <mi>k</mi>
      </mtd>
      <mtd>
        <mi></mi>
        <mo>=</mo>
        <mn>1</mn>
        <mo>+</mo>
        <mo>.</mo>
        <mo>.</mo>
        <mo>.</mo>
        <mo>+</mo>
        <mi>n</mi>
      </mtd>
    </mtr>
    <mtr>
      <mtd></mtd>
      <mtd>
        <mi></mi>
        <mo>=</mo>
        <mfrac>
          <mrow>
            <mi>n</mi>
            <mo stretchy="false">(</mo>
            <mi>n</mi>
            <mo>+</mo>
            <mn>1</mn>
            <mo stretchy="false">)</mo>
          </mrow>
          <mn>2</mn>
        </mfrac>
      </mtd>
    </mtr>
  </mtable>
</math>
</div>


``` markdown title="数学公式：函数调用"
$ frac(a^2, 2) $
$ vec(1, 2, delim: "[") $
$ mat(1, 2; 3, 4) $
$ lim_x =
    op("lim", limits: #true)_x $
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mfrac>
    <msup>
      <mi>a</mi>
      <mn>2</mn>
    </msup>
    <mn>2</mn>
  </mfrac>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="INNER">
    <mo data-mjx-texclass="OPEN">[</mo>
    <mtable columnspacing="1em" rowspacing="4pt">
      <mtr>
        <mtd>
          <mn>1</mn>
        </mtd>
      </mtr>
      <mtr>
        <mtd>
          <mn>2</mn>
        </mtd>
      </mtr>
    </mtable>
    <mo data-mjx-texclass="CLOSE">]</mo>
  </mrow>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="INNER">
    <mo data-mjx-texclass="OPEN">(</mo>
    <mtable columnspacing="1em" rowspacing="4pt">
      <mtr>
        <mtd>
          <mn>1</mn>
        </mtd>
        <mtd>
          <mn>2</mn>
        </mtd>
      </mtr>
      <mtr>
        <mtd>
          <mn>3</mn>
        </mtd>
        <mtd>
          <mn>4</mn>
        </mtd>
      </mtr>
    </mtable>
    <mo data-mjx-texclass="CLOSE">)</mo>
  </mrow>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <munder>
    <mo data-mjx-texclass="OP" movablelimits="true">lim</mo>
    <mi>x</mi>
  </munder>
  <mo>=</mo>
  <munder>
    <mo data-mjx-texclass="OP" movablelimits="true">lim</mo>
    <mi>x</mi>
  </munder>
</math>
</div>

``` markdown title="数学公式：对齐"
$ (3x + y) / 7 &= 9 && "given" \
    3x + y &= 63 & "multiply by 7" \
    3x &= 63 - y && "subtract y" \
    x &= 21 - y/3 & "divide by 3" $
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtable displaystyle="true" columnalign="right left right left" columnspacing="0em 2em 0em" rowspacing="3pt">
    <mtr>
      <mtd>
        <mfrac>
          <mrow>
            <mn>3</mn>
            <mi>x</mi>
            <mo>+</mo>
            <mi>y</mi>
          </mrow>
          <mn>7</mn>
        </mfrac>
      </mtd>
      <mtd>
        <mi></mi>
        <mo>=</mo>
        <mn>9</mn>
      </mtd>
      <mtd></mtd>
      <mtd>
        <mtext>given</mtext>
      </mtd>
    </mtr>
    <mtr>
      <mtd>
        <mn>3</mn>
        <mi>x</mi>
        <mo>+</mo>
        <mi>y</mi>
      </mtd>
      <mtd>
        <mi></mi>
        <mo>=</mo>
        <mn>63</mn>
      </mtd>
      <mtd>
        <mtext>multiply by 7</mtext>
      </mtd>
    </mtr>
    <mtr>
      <mtd>
        <mn>3</mn>
        <mi>x</mi>
      </mtd>
      <mtd>
        <mi></mi>
        <mo>=</mo>
        <mn>63</mn>
        <mo>&#x2212;</mo>
        <mi>y</mi>
      </mtd>
      <mtd></mtd>
      <mtd>
        <mtext>subtract y</mtext>
      </mtd>
    </mtr>
    <mtr>
      <mtd>
        <mi>x</mi>
      </mtd>
      <mtd>
        <mi></mi>
        <mo>=</mo>
        <mn>21</mn>
        <mo>&#x2212;</mo>
        <mfrac>
          <mi>y</mi>
          <mn>3</mn>
        </mfrac>
      </mtd>
      <mtd>
        <mtext>divide by 3</mtext>
      </mtd>
    </mtr>
  </mtable>
</math>
</div>

### 行中断

``` markdown title="行中断"
*Date:* 26.12.2022 \
*Topic:* Infrastructure Test \
*Severity:* High \
```

<div class="result">
<p><strong>Date:</strong> 26.12.2022</p>
<p><strong>Topic:</strong> Infrastructure Test</p>
<p><strong>Severity:</strong> High</p>
</div>

### 智能引号

``` markdown title="智能引号"
"This is in quotes."

#set text(lang: "de")
"Das ist in Anführungszeichen."

#set text(lang: "fr")
"C'est entre guillemets."
```

<div class="result">
<p>“This is in quotes.”</p>
<p>„Das ist in Anführungszeichen.“</p>
<p>« C’est entre guillemets. »</p>
</div>

### 快捷符号

https://typst.app/docs/reference/symbols/sym/
