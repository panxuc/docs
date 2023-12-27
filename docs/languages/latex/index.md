# LaTeX

LaTeX（/ˈlɑːtɛx/，写作 $\LaTeX$）是一种基于 $\TeX$ 的排版系统，由美国计算机科学家莱斯利·兰伯特（Leslie Lamport）在 20 世纪 80 年代初期开发，利用这种格式，即使使用者没有排版和程序设计的知识也可以充分发挥由 $\TeX$ 所提供的强大功能，能在几天，甚至几小时内生成很多具有书籍质量的印刷品。

## 基本结构

``` latex title="基本结构"
\documentclass{article}

\usepackage{ctex}

\title{标题}
\author{作者}
\date{日期}

\begin{document}

\maketitle

\tableofcontents

\section{标题}

段落

\subsection{标题}

段落

\end{document}
```
