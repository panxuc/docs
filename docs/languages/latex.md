---
comments: true
---

# LaTeX

## 基本语法

``` latex title="标题"
\section{标题}
\subsection{标题}
\subsubsection{标题}
```

<div class="result">
<section>
<h1>标题</h1>
<h2>标题</h2>
<h3>标题</h3>
</section>
</div>

``` latex title="段落"
\paragraph{段落}
```

<div class="result">
<p>段落</p>
</div>

``` latex title="链接"
\href{https://www.panxuc.com}{Xuc Pan 的主页}
```

<div class="result">
<a href="https://www.panxuc.com">Xuc Pan 的主页</a>
</div>

``` latex title="图片"
\includegraphics[width=0.5\textwidth]{https://docs.panxuc.com/assets/favicon.png}
```

<div class="result">
<img src="https://docs.panxuc.com/assets/favicon.png" alt="Xuc Pan">
</div>

``` latex title="列表"
\begin{itemize}
    \item 列表项
    \item 列表项
    \item 列表项
\end{itemize}
\begin{enumerate}
    \item 列表项
    \item 列表项
    \item 列表项
\end{enumerate}
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

``` latex title="表格"
\begin{tabular}{|c|c|c|}
    \hline
    列1 & 列2 & 列3 \\
    \hline
    行1 & 行1 & 行1 \\
    \hline
    行2 & 行2 & 行2 \\
    \hline
    行3 & 行3 & 行3 \\
    \hline
\end{tabular}
```

<div class="result">
<table>
<thead>
<tr>
<th>列1</th>
<th>列2</th>
<th>列3</th>
</tr>
</thead>
<tbody>
<tr>
<td>行1</td>
<td>行1</td>
<td>行1</td>
</tr>
<tr>
<td>行2</td>
<td>行2</td>
<td>行2</td>
</tr>
<tr>
<td>行3</td>
<td>行3</td>
<td>行3</td>
</tr>
</tbody>
</table>
</div>

``` latex title="代码"
\begin{lstlisting}[language=python]
def hello():
    print("Hello World!")
\end{lstlisting}
```

<div class="result">

``` python
def hello():
    print("Hello World!")
```

</div>

``` latex title="公式"
\begin{equation}
    \int_{-\infty}^{+\infty} e^{-x^2} dx = \sqrt{\pi}
\end{equation}
```

$$
\int_{-\infty}^{+\infty} e^{-x^2} dx = \sqrt{\pi}
$$

``` latex title="脚注"
\footnote{脚注}
```

<div class="result">
<p>脚注<a href="#fn1" class="footnote-ref" id="fnref1"><sup>1</sup></a></p>
</div>

``` latex title="引用"
\cite{ref}
```

<div class="result">
<p><a href="#ref1">[1]</a></p>
</div>

``` latex title="加粗"
\textbf{加粗}
```

<div class="result">
<p><strong>加粗</strong></p>
</div>

``` latex title="斜体"
\textit{斜体}
```

<div class="result">
<p><em>斜体</em></p>
</div>

``` latex title="删除线"
\textst{删除线}
```

<div class="result">
<p><del>删除线</del></p>
</div>

``` latex title="下划线"
\underline{下划线}
```

<div class="result">
<p><u>下划线</u></p>
</div>

## 公式

???+ 希腊字母
  
    | LaTeX         | $\LaTeX$      | LaTeX       | $\LaTeX$    | LaTeX     | $\LaTeX$  |
    | ------------- | ------------- | ----------- | ----------- | --------- | --------- |
    | `\alpha`      | $\alpha$      | `\beta`     | $\beta$     | `\gamma`  | $\gamma$  |
    | `\delta`      | $\delta$      | `\epsilon`  | $\epsilon$  | `\zeta`   | $\zeta$   |
    | `\eta`        | $\eta$        | `\theta`    | $\theta$    | `\iota`   | $\iota$   |
    | `\kappa`      | $\kappa$      | `\lambda`   | $\lambda$   | `\mu`     | $\mu$     |
    | `\nu`         | $\nu$         | `\xi`       | $\xi$       | `\pi`     | $\pi$     |
    | `\rho`        | $\rho$        | `\sigma`    | $\sigma$    | `\tau`    | $\tau$    |
    | `\upsilon`    | $\upsilon$    | `\phi`      | $\phi$      | `\chi`    | $\chi$    |
    | `\psi`        | $\psi$        | `\omega`    | $\omega$    |           |           |
    | `\Gamma`      | $\Gamma$      | `\Delta`    | $\Delta$    | `\Theta`  | $\Theta$  |
    | `\Lambda`     | $\Lambda$     | `\Xi`       | $\Xi$       | `\Pi`     | $\Pi$     |
    | `\Sigma`      | $\Sigma$      | `\Upsilon`  | $\Upsilon$  | `\Phi`    | $\Phi$    |
    | `\Psi`        | $\Psi$        | `\Omega`    | $\Omega$    |           |           |
    | `\varepsilon` | $\varepsilon$ | `\vartheta` | $\vartheta$ | `\varpi`  | $\varpi$  |
    | `\varrho`     | $\varrho$     | `\varsigma` | $\varsigma$ | `\varphi` | $\varphi$ |
    
???+ 运算符

    === "操作符"

        | LaTeX              | $\LaTeX$           | LaTeX      | $\LaTeX$   | LaTeX            | $\LaTeX$         |
        | ------------------ | ------------------ | ---------- | ---------- | ---------------- | ---------------- |
        | `\pm`              | $\pm$              | `\mp`      | $\mp$      | `\times`         | $\times$         |
        | `\div`             | $\div$             | `\cdot`    | $\cdot$    | `\ast`           | $\ast$           |
        | `\star`            | $\star$            | `\dagger`  | $\dagger$  | `\ddagger`       | $\ddagger$       |
        | `\amalg`           | $\amalg$           | `\cap`     | $\cap$     | `\cup`           | $\cup$           |
        | `\uplus`           | $\uplus$           | `\sqcap`   | $\sqcap$   | `\sqcup`         | $\sqcup$         |
        | `\vee`             | $\vee$             | `\wedge`   | $\wedge$   | `\oplus`         | $\oplus$         |
        | `\ominus`          | $\ominus$          | `\otimes`  | $\otimes$  | `\circ`          | $\circ$          |
        | `\bullet`          | $\bullet$          | `\diamond` | $\diamond$ | `\lhd`           | $\lhd$           |
        | `\rhd`             | $\rhd$             | `\unlhd`   | $\unlhd$   | `\unrhd`         | $\unrhd$         |
        | `\oslash`          | $\oslash$          | `\odot`    | $\odot$    | `\bigcirc`       | $\bigcirc$       |
        | `\triangleleft`    | $\triangleleft$    | `\Diamond` | $\Diamond$ | `\bigtriangleup` | $\bigtriangleup$ |
        | `\bigtriangledown` | $\bigtriangledown$ | `\Box`     | $\Box$     | `\triangleright` | $\triangleright$ |
        | `\setminus`        | $\setminus$        | `\wr`      | $\wr$      | `\triangledown`  | $\triangledown$  |
        
    === "关系符"

        | LaTeX         | $\LaTeX$      | LaTeX       | $\LaTeX$    | LaTeX         | $\LaTeX$      |
        | ------------- | ------------- | ----------- | ----------- | ------------- | ------------- |
        | `\leq`        | $\leq$        | `\geq`      | $\geq$      | `\neq`        | $\neq$        |
        | `\sim`        | $\sim$        | `\ll`       | $\ll$       | `\gg`         | $\gg$         |
        | `\doteq`      | $\doteq$      | `\simeq`    | $\simeq$    | `\subset`     | $\subset$     |
        | `\supset`     | $\supset$     | `\approx`   | $\approx$   | `\asymp`      | $\asymp$      |
        | `\subseteq`   | $\subseteq$   | `\supseteq` | $\supseteq$ | `\cong`       | $\cong$       |
        | `\smile`      | $\smile$      | `\sqsubset` | $\sqsubset$ | `\sqsupset`   | $\sqsupset$   |
        | `\equiv`      | $\equiv$      | `\frown`    | $\frown$    | `\sqsubseteq` | $\sqsubseteq$ |
        | `\sqsupseteq` | $\sqsupseteq$ | `\propto`   | $\propto$   | `\bowtie`     | $\bowtie$     |
        | `\in`         | $\in$         | `\ni`       | $\ni$       | `\prec`       | $\prec$       |
        | `\succ`       | $\succ$       | `\vdash`    | $\vdash$    | `\dashv`      | $\dashv$      |
        | `\preceq`     | $\preceq$     | `\succeq`   | $\succeq$   | `\models`     | $\models$     |
        | `\perp`       | $\perp$       | `\parallel` | $\parallel$ |               |               |
        | `\mid`        | $\mid$        | `\bumpeq`   | $\bumpeq$   |               |               |

    === "否定"

        | LaTeX    | $\LaTeX$ | LaTeX    | $\LaTeX$ | LaTeX        | $\LaTeX$     |
        | -------- | -------- | -------- | -------- | ------------ | ------------ |
        | `\nless` | $\nless$ | `\ngtr`  | $\ngtr$  | `\neq`       | $\neq$       |
        | `\nmid`  | $\nmid$  | `\nleq`  | $\nleq$  | `\ngeq`      | $\ngeq$      |
        | `\nsim`  | $\nsim$  | `\ncong` | $\ncong$ | `\nparallel` | $\nparallel$ |
        | `\nprec` | $\nprec$ | `\nsucc` | $\nsucc$ | `\nvdash`    | $\nvdash$    |
        | `\lneq`  | $\lneq$  | `\gneq`  | $\gneq$  | `\nsubseteq` | $\nsubseteq$ |
        | `\lneqq` | $\lneqq$ | `\gneqq` | $\gneqq$ | `\nsupseteq` | $\nsupseteq$ |
        | `\lnsim` | $\lnsim$ | `\gnsim` | $\gnsim$ |              |              |

``` latex title="上下标"
x^2, x_2
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <msup>
    <mi>x</mi>
    <mn>2</mn>
  </msup>
  <mo>,</mo>
  <msub>
    <mi>x</mi>
    <mn>2</mn>
  </msub>
</math>
</div>

``` latex title="分式"
\frac{1}{2}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mfrac>
    <mn>1</mn>
    <mn>2</mn>
  </mfrac>
</math>
</div>

``` latex title="根式"
\sqrt{2}, \sqrt[3]{2}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <msqrt>
    <mn>2</mn>
  </msqrt>
  <mo>,</mo>
  <mroot>
    <mn>2</mn>
    <mn>3</mn>
  </mroot>
</math>
</div>

``` latex title="积分"
\int_{-\infty}^{+\infty} e^{-x^2} dx
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <msubsup>
    <mo data-mjx-texclass="OP">&#x222B;</mo>
    <mrow data-mjx-texclass="ORD">
      <mo>&#x2212;</mo>
      <mi mathvariant="normal">&#x221E;</mi>
    </mrow>
    <mrow data-mjx-texclass="ORD">
      <mo>+</mo>
      <mi mathvariant="normal">&#x221E;</mi>
    </mrow>
  </msubsup>
  <msup>
    <mi>e</mi>
    <mrow data-mjx-texclass="ORD">
      <mo>&#x2212;</mo>
      <msup>
        <mi>x</mi>
        <mn>2</mn>
      </msup>
    </mrow>
  </msup>
  <mi>d</mi>
  <mi>x</mi>
</math>
</div>

``` latex title="求和"
\sum_{i=1}^{n} i
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <munderover>
    <mo data-mjx-texclass="OP">&#x2211;</mo>
    <mrow data-mjx-texclass="ORD">
      <mi>i</mi>
      <mo>=</mo>
      <mn>1</mn>
    </mrow>
    <mrow data-mjx-texclass="ORD">
      <mi>n</mi>
    </mrow>
  </munderover>
  <mi>i</mi>
</math>
</div>

``` latex title="极限"
\lim_{x \to \infty} \frac{1}{x}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <munder>
    <mo data-mjx-texclass="OP" movablelimits="true">lim</mo>
    <mrow data-mjx-texclass="ORD">
      <mi>x</mi>
      <mo accent="false" stretchy="false">&#x2192;</mo>
      <mi mathvariant="normal">&#x221E;</mi>
    </mrow>
  </munder>
  <mfrac>
    <mn>1</mn>
    <mi>x</mi>
  </mfrac>
</math>
</div>

``` latex title="矩阵"
\begin{bmatrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{bmatrix}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="INNER">
    <mo data-mjx-texclass="OPEN">[</mo>
    <mtable columnspacing="1em" rowspacing="4pt">
      <mtr>
        <mtd>
          <mn>1</mn>
        </mtd>
        <mtd>
          <mn>2</mn>
        </mtd>
        <mtd>
          <mn>3</mn>
        </mtd>
      </mtr>
      <mtr>
        <mtd>
          <mn>4</mn>
        </mtd>
        <mtd>
          <mn>5</mn>
        </mtd>
        <mtd>
          <mn>6</mn>
        </mtd>
      </mtr>
      <mtr>
        <mtd>
          <mn>7</mn>
        </mtd>
        <mtd>
          <mn>8</mn>
        </mtd>
        <mtd>
          <mn>9</mn>
        </mtd>
      </mtr>
    </mtable>
    <mo data-mjx-texclass="CLOSE">]</mo>
  </mrow>
</math>
</div>
