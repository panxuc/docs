---
comments: true
---

# Python

## Matplotlib

### 画图类型

| 画图类型       | 函数                         | 示例                                                                                         |
| -------------- | ---------------------------- | -------------------------------------------------------------------------------------------- |
| 折线图         | `plot(x, y)`                 | ![折线图](https://matplotlib.org/stable/_images/sphx_glr_plot_001.png){width="60"}           |
| 散点图         | `scatter(x, y)`              | ![散点图](https://matplotlib.org/stable/_images/sphx_glr_scatter_plot_001.png){width="60"}   |
| 柱状图         | `bar(x, height)`             | ![柱状图](https://matplotlib.org/stable/_images/sphx_glr_bar_001.png){width="60"}            |
| 茎叶图         | `stem(x, y)`                 | ![茎叶图](https://matplotlib.org/stable/_images/sphx_glr_stem_001.png){width="60"}           |
| 填充图         | `fill_between(x, y1, y2)`    | ![填充图](https://matplotlib.org/stable/_images/sphx_glr_fill_between_001.png){width="60"}   |
| 堆叠图         | `stackplot(x, y)`            | ![堆叠图](https://matplotlib.org/stable/_images/sphx_glr_stackplot_001.png){width="60"}      |
| 阶梯图         | `stairs(values)`             | ![阶梯图](https://matplotlib.org/stable/_images/sphx_glr_stairs_001.png){width="60"}         |
| 直方图         | `hist(x)`                    | ![直方图](https://matplotlib.org/stable/_images/sphx_glr_hist_plot_001.png){width="60"}      |
| 箱线图         | `boxplot(X)`                 | ![箱线图](https://matplotlib.org/stable/_images/sphx_glr_boxplot_plot_001.png){width="60"}   |
| 误差棒图       | `errorbar(x, y, yerr, xerr)` | ![误差图](https://matplotlib.org/stable/_images/sphx_glr_errorbar_plot_001.png){width="60"}  |
| 小提琴图       | `violinplot(D)`              | ![小提琴图](https://matplotlib.org/stable/_images/sphx_glr_violin_001.png){width="60"}       |
| 栅格图         | `eventplot(D)`               | ![栅格图](https://matplotlib.org/stable/_images/sphx_glr_eventplot_001.png){width="60"}      |
| 二维直方图     | `hist2d(x, y)`               | ![二维直方图](https://matplotlib.org/stable/_images/sphx_glr_hist2d_001.png){width="60"}     |
| 六边二维直方图 | `hexbin(x, y)`               | ![六边二维直方图](https://matplotlib.org/stable/_images/sphx_glr_hexbin_001.png){width="60"} |
| 饼图           | `pie(x)`                     | ![饼图](https://matplotlib.org/stable/_images/sphx_glr_pie_001.png){width="60"}              |
| 累积图         | `ecdf(x)`                    | ![累积图](https://matplotlib.org/stable/_images/sphx_glr_ecdf_001.png){width="60"}           |

### 初学者快速启动

导入模块

``` python
import matplotlib as mpl
from matplotlib import pyplot as plt
from PIL import Image
import numpy as np
```

设置中文字体（默认无法显示中文）

``` python
plt.rcParams['font.sans-serif'] = ['SimHei'] # (1)!
plt.rcParams['axes.unicode_minus'] = False
```

1.  宋体：`'SimSun'`，<br>黑体：`'SimHei'`，<br>微软雅黑：`'Microsoft YaHei'`，<br>微软正黑：`'Microsoft JhengHei'`，<br>新宋体：`'NSimSun'`，<br>新细明体：`'PMingLiU'`，<br>仿宋：`'FangSong'`，<br>楷体：`'KaiTi'`

设置数据
    
``` python
x = np.linspace(0.01, 100, 500) # 含义：从0.01到100，取500个数
y = np.log(x) # (1)!
```

1.  Matplotlib 支持的数据类型：`list`，`tuple`，`ndarray`，`dict`，`Series`，`DataFrame`，`Panel`，`Index`，`MultiIndex`，`Categorical`，`SparseArray`，`SparseDataFrame`，`SparsePanel`，`Interval`，`IntervalIndex`，`IntervalArray`，`Period`，`PeriodIndex`，`PeriodArray`，`DatetimeIndex`，`TimedeltaIndex`，`DatetimeArray`，`TimedeltaArray`，`CategoricalIndex`，`CategoricalArray`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`，`SparseDtype`，`CategoricalDtype`，`IntervalDtype`，`PeriodDtype`，`DatetimeTZDtype`，`PeriodDtype`，`TimedeltaDtype`

设置画布大小

``` python
plt.figure(figsize=(10, 10))
```

设置坐标轴范围（可选）

``` python
plt.xlim(0, 10)
plt.ylim(0, 10)
```

画图

``` python
plt.plot(x, y, label='图例')
```

设置坐标轴标签

``` python
plt.xlabel('x轴')
plt.ylabel('y轴')
```

设置坐标轴刻度（可选）

``` python
plt.xticks(np.arange(0, 10, 1))
plt.yticks(np.arange(0, 10, 1))
```

设置标题

``` python
plt.title('标题')
```

设置网格（可选）

``` python
plt.grid()
```

设置图例（可选）

``` python
plt.legend()
```

保存图片

``` python
plt.savefig('test.png')
```

示例：一张图片两幅图

``` python
x = np.linspace(0.01, 100, 500)
y = np.log(x)
plt.figure(figsize=(16, 4))
plt.subplot(121)
plt.plot(x, y, color='blue')
plt.xlabel('x axis linear')
plt.ylabel('y axis')
plt.title('y=log(x) linear')
plt.subplot(122)
plt.xscale('log')
plt.plot(x, y, color='green')
plt.xlabel('x axis log')
plt.ylabel('y axis')
plt.title('y=log(x) log')
plt.savefig('ex1.png')
```

<div class="result" markdown>

![](https://cdn.jsdelivr.net/gh/Panxuc/MatPyFly-Python-Homework-2023@latest/04/.readme/output1.png)

</div>

一图读懂 Matplotlib

![](https://matplotlib.org/stable/_images/anatomy.png)