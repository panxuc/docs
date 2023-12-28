# 基本文字处理

$\LaTeX$ 文字排版能力很强。

## 字体

$\LaTeX$ 字体分为三种族：罗马族、无衬线族和打字机族。

### 罗马族

罗马族是最常用的字体族，它包含了斜体和粗体。

``` latex title="罗马族"
\textnormal{Normal}
\textit{Italic}
\textbf{Bold}
\textit{\textbf{Bold Italic}}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext>Normal</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathvariant="italic">Italic</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathvariant="bold">Bold</mtext>
</math>
</div>

### 无衬线族

无衬线族是没有衬线的字体，它包含了斜体和粗体。

``` latex title="无衬线族"
\textsf{Sans Serif}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathvariant="sans-serif">Sans Serif</mtext>
</math>
</div>

### 打字机族

打字机族是等宽字体，它包含了斜体和粗体。

``` latex title="打字机族"
\texttt{Typewriter}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathvariant="monospace">Typewriter</mtext>
</math>
</div>

### 中文字体

中文字体需要使用 `ctex` 宏包。

``` latex title="中文字体"
\usepackage{ctex}
```

编译时需要使用 `XeLaTeX`。

## 字体大小

``` latex title="字体大小"
normalsize words
{\tiny tiny words}
{\scriptsize scriptsize words}
{\footnotesize footnotesize words}
{\small small words}
{\normalsize normalsize words}
{\large large words}
{\Large Large words}
{\LARGE LARGE words}
{\huge huge words}
{\Huge Huge words}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext>normalsize words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="0.5em">tiny words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="0.7em">scriptsize words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="0.85em">footnotesize words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="0.93em">small words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext>normalsize words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="1.2em">large words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="1.44em">Large words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="1.728em">LARGE words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="2.074em">huge words</mtext>
</math>
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mtext mathsize="2.488em">Huge words</mtext>
</math>
</div>
