# Lambda 表达式

Lambda 表达式是一种匿名函数，它可以像数据一样被传递和使用。Lambda 表达式可以像委托一样被传递，但它比委托更灵活。Lambda 表达式可以被用于任何委托类型，而不仅仅是 `Func` 和 `Action` 委托类型。

## 语法

Lambda 表达式主要可分为表达式 Lambda 和语句 Lambda 两种形式。

### 表达式 Lambda

表达式 Lambda 语法如下：

```csharp
(parameters) => expression
```

其中，`parameters` 是参数列表，`expression` 是表达式。它会返回表达式的结果。

### 语句 Lambda

语句 Lambda 语法如下：

```csharp
(parameters) => { statements }
```

其中，`parameters` 是参数列表，`statements` 是语句块。它会执行语句块，并返回语句块的结果（如果有）。

## 示例

### 表达式 Lambda

```csharp
Func<int, int> square = x => x * x;
Console.WriteLine(square(5)); // 25
```

### 语句 Lambda

```csharp
Func<int, int> square = x =>
{
    int result = x * x;
    return result;
};
Console.WriteLine(square(5)); // 25
```

## `=>` 运算符

`=>` 运算符是 Lambda 表达式的核心。它读作“goes to”，表示 Lambda 表达式的左边的参数列表“goes to”右边的表达式或语句块。

事实上，`=>` 运算符除了用于 Lambda 表达式，还可以用于表达式主体定义。例如：

```csharp
int square(int x) => x * x;
Console.WriteLine(square(5)); // 25
```

```csharp
string GetDayOfWeek(int day) => day switch
{
    1 => "Monday",
    2 => "Tuesday",
    3 => "Wednesday",
    4 => "Thursday",
    5 => "Friday",
    6 => "Saturday",
    7 => "Sunday",
    _ => throw new ArgumentOutOfRangeException(nameof(day))
};
Console.WriteLine(GetDayOfWeek(1)); // Monday
```
