---
comments: true
---

# 公式

在 $\LaTeX$ 中，公式是用 `$` 包裹起来的，比如 `$x^2$`。如果想要单独显示公式，可以使用 `$$` 或者 `\[\]`，比如 `$$x^2$$` 或者 `\[\]x^2\[\]`。

## 基本公式

### 上下标

上标和下标可以使用 `^` 和 `_` 表示，如果上下标的内容不止一个字符，需要用 `{}` 包裹起来。

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

### 分式

分式可以使用 `\frac{分子}{分母}` 表示。

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

### 根式

根式可以使用 `\sqrt[根次]{被开方数}` 表示。

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

### 积分与求和

积分和求和可以使用 `\int` 和 `\sum` 表示。对于单独显示的公式，`_` 和 `^` 会自动找到它们对应的位置。

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

### 极限

极限可以使用 `\lim_{x \to \infty}` 表示。

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

### 矩阵

矩阵可以使用 `matrix`、`pmatrix`、`bmatrix`、`Bmatrix`、`vmatrix`、`Vmatrix` 等环境表示，其中带括号的矩阵也可以使用 `\left` 和 `\right` 加上括号表示。

``` latex title="矩阵"
\begin{matrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{matrix}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
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
</math>
</div>

``` latex title="圆括号矩阵"
\begin{pmatrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{pmatrix}
```

<div class="result">
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
    <mo data-mjx-texclass="CLOSE">)</mo>
  </mrow>
</math>
</div>

``` latex title="方括号矩阵"
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


``` latex title="大括号矩阵"
\begin{Bmatrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{Bmatrix}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="INNER">
    <mo data-mjx-texclass="OPEN">{</mo>
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
    <mo data-mjx-texclass="CLOSE">}</mo>
  </mrow>
</math>
</div>

``` latex title="单竖线矩阵"
\begin{vmatrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{vmatrix}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="INNER">
    <mo data-mjx-texclass="OPEN">|</mo>
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
    <mo data-mjx-texclass="CLOSE">|</mo>
  </mrow>
</math>
</div>

``` latex title="双竖线矩阵"
\begin{Vmatrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{Vmatrix}
```

<div class="result">
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mrow data-mjx-texclass="INNER">
    <mo data-mjx-texclass="OPEN" symmetric="true">&#x2016;</mo>
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
    <mo data-mjx-texclass="CLOSE" symmetric="true">&#x2016;</mo>
  </mrow>
</math>
</div>

``` latex title="带括号矩阵的另一种表示"
\left(
\begin{matrix}
    1 & 2 & 3 \\
    4 & 5 & 6 \\
    7 & 8 & 9
\end{matrix}
\right)
```

<div class="result">
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
    <mo data-mjx-texclass="CLOSE">)</mo>
  </mrow>
</math>
</div>

## 希腊字母

在 $\LaTeX$ 中，希腊字母是用 `\` 加上字母的小写或者大写形式表示的，比如 `\alpha` 或者 `\Alpha`。有的希腊字母有多种形式，比如 `\epsilon` 和 `\varepsilon`，`\phi` 和 `\varphi`，`\rho` 和 `\varrho`。

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
    
## 运算符

### 操作符

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
    
### 关系符

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

### 否定

| LaTeX    | $\LaTeX$ | LaTeX    | $\LaTeX$ | LaTeX        | $\LaTeX$     |
| -------- | -------- | -------- | -------- | ------------ | ------------ |
| `\nless` | $\nless$ | `\ngtr`  | $\ngtr$  | `\neq`       | $\neq$       |
| `\nmid`  | $\nmid$  | `\nleq`  | $\nleq$  | `\ngeq`      | $\ngeq$      |
| `\nsim`  | $\nsim$  | `\ncong` | $\ncong$ | `\nparallel` | $\nparallel$ |
| `\nprec` | $\nprec$ | `\nsucc` | $\nsucc$ | `\nvdash`    | $\nvdash$    |
| `\lneq`  | $\lneq$  | `\gneq`  | $\gneq$  | `\nsubseteq` | $\nsubseteq$ |
| `\lneqq` | $\lneqq$ | `\gneqq` | $\gneqq$ | `\nsupseteq` | $\nsupseteq$ |
| `\lnsim` | $\lnsim$ | `\gnsim` | $\gnsim$ |              |              |
