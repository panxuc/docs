---
comments: true
---

# 基本文字处理

$\LaTeX$ 文字排版能力很强。

## 字体

$\LaTeX$ 字体分为三种族：罗马族、无衬线族和打字机族。

### 罗马族

罗马族是最常用的字体族，它包含了斜体和粗体。

``` latex title="罗马族"
\textnormal{正常}
\textit{斜体}
\textbf{粗体}
\textit{\textbf{粗斜体}}
```

### 无衬线族

无衬线族是没有衬线的字体，它包含了斜体和粗体。

``` latex title="无衬线族"
\textsf{正常} 
\textsl{斜体}
\textsf{\textbf{粗体}}
\textsl{\textbf{粗斜体}}
```

### 打字机族

打字机族是等宽字体，它包含了斜体和粗体。

``` latex title="打字机族"
\texttt{正常}
\texttt{\textit{斜体}}
\texttt{\textbf{粗体}}
\texttt{\textit{\textbf{粗斜体}}}
```

### 中文字体

中文字体需要使用 `ctex` 宏包。

``` latex title="中文字体"
\usepackage{ctex}
```

编译时需要使用 `XeLaTeX`。

## 字体效果

``` latex title="字体效果"
\textit{words in italics}
\textsl{words slanted}
\textsc{words in smallcaps}
\textbf{words in bold}
\texttt{words in teletype}
\textsf{sans serif words}
\textrm{roman words}
\underline{underlined words}
```

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