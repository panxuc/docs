# C\# & .NET

C# 是微软推出的一种基于 .NET 的、由 C 和 C++ 派生出来的、面向对象的高级编程语言。它在继承 C 和 C++ 强大功能的同时去掉了一些它们的复杂特性，使其成为 C 语言家族中的一种高效强大的编程语言。

当前，C# 在众多领域有广泛的应用。你可以用 WPF 开发桌面应用，用 MAUI 开发跨平台应用，用 Unity 开发游戏，用 ASP.NET Core 开发 Web 应用等等。

## .NET

C# 程序在 .NET 上运行，.NET 是名为“公共语言运行时 (CLR，Common Language Runtime) ”的虚执行系统和一组类库。

在生成一个 .NET 程序时，程序员编写的代码暂时不翻译成本地的机器语言，而是先被编译成符合 CLI 规范的中间语言 (IL)。在执行可执行文件时，将启动对应 .NET 框架的“公共语言运行时”，由该 CLR 将 MSIL 编译为机器码执行，称作 JIT 编译（just-in-time compilation）。

.NET 版本中，奇数版本号表示 STS 版本，支持期限为 18 个月；偶数版本号表示 LTS 版本，支持期限为 3 年。当前最新的 LTS 版本是 .NET 8。

## 从 Hello World 开始

让我们来看一个用 C# 写的 Hello World 程序：

```csharp
using System;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }
}
```

- `using` 语句用于引入命名空间，这里引入了 `System` 命名空间，该命名空间包含了 `Console` 类，这样我们就可以直接使用 `Console` 类了。
- `namespace` 语句用于声明命名空间，这里声明了 `HelloWorld` 命名空间。
- `class` 语句用于声明类，这里声明了 `Program` 类。
- `static` 语句用于声明静态成员，这里声明了 `Main` 方法。
- `void` 语句用于声明方法返回值类型，这里声明了 `Main` 方法的返回值类型为 `void`，即无返回值。
- `Main` 方法是程序的入口点，程序从这里开始执行。
- `Console.WriteLine` 方法用于输出一行文本，由于我们引入了 `System` 命名空间，所以可以直接使用 `Console` 类，无需写成 `System.Console.WriteLine`。

### `Main` 方法

在 C# 中，一般来说，程序的入口点是 `Main` 方法。一个程序通常只会定义一个 `Main` 方法，但也可以定义多个 `Main` 方法，但是这样就要在项目配置中指定入口点了。

`Main` 方法通常有以下几种形式：

```csharp
public static void Main() { }
public static int Main() { }
public static void Main(string[] args) { }
public static int Main(string[] args) { }
public static async Task Main() { }
public static async Task<int> Main() { }
public static async Task Main(string[] args) { }
public static async Task<int> Main(string[] args) { }
```

## 数据类型

C# 中的数据类型分为值类型和引用类型。值类型包括整型、浮点型、布尔型、字符型、枚举型和结构体；引用类型包括类、接口、委托和数组。

|   C# 类型   |     .NET 类型      | 大小（字节） |                          范围                          |
| :---------: | :----------------: | :----------: | :----------------------------------------------------: |
|   `sbyte`   |   `System.SByte`   |      1       |                       -128 ~ 127                       |
|   `byte`    |   `System.Byte`    |      1       |                        0 ~ 255                         |
|   `short`   |   `System.Int16`   |      2       |                    -32,768 ~ 32,767                    |
|  `ushort`   |  `System.UInt16`   |      2       |                       0 ~ 65,535                       |
|    `int`    |   `System.Int32`   |      4       |             -2,147,483,648 ~ 2,147,483,647             |
|   `uint`    |  `System.UInt32`   |      4       |                   0 ~ 4,294,967,295                    |
|   `long`    |   `System.Int64`   |      8       | -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 |
|   `ulong`   |  `System.UInt64`   |      8       |             0 ~ 18,446,744,073,709,551,615             |
|   `float`   |  `System.Single`   |      4       |    ±1.5 × 10<sup>-45</sup> ~ ±3.4 × 10<sup>38</sup>    |
|  `double`   |  `System.Double`   |      8       |   ±5.0 × 10<sup>-324</sup> ~ ±1.7 × 10<sup>308</sup>   |
|  `decimal`  |  `System.Decimal`  |      16      |  ±1.0 × 10<sup>-28</sup> ~ ±7.9228 × 10<sup>28</sup>   |
|   `bool`    |  `System.Boolean`  |      1       |                   `true` 或 `false`                    |
|   `char`    |   `System.Char`    |      2       |                    U+0000 ~ U+ffff                     |
|  `string`   |  `System.String`   |      2       |                           -                            |
|  `object`   |  `System.Object`   |      4       |                           -                            |
|   `enum`    |   `System.Enum`    |      4       |                           -                            |
|  `struct`   | `System.ValueType` |      0       |                           -                            |
|   `class`   |  `System.Object`   |      4       |                           -                            |
| `interface` |  `System.Object`   |      4       |                           -                            |
| `delegate`  | `System.Delegate`  |      4       |                           -                            |
|   `array`   |   `System.Array`   |      0       |                           -                            |

### 值类型

值类型的变量包含类型的实例，而不是指向类型的引用。

整形类型、浮点型、布尔型、字符型与 C/C++ 中的对应类型基本相同，不再赘述。

#### 枚举类型

枚举类型是一种特殊的值类型，它是一组命名的常量的集合。枚举类型的声明如下：

```csharp
enum Color
{
    Red,
    Green,
    Blue
}
```

枚举类型的默认基础类型是 `int`，可以通过指定基础类型来改变它：

```csharp
enum Color : byte
{
    Red,
    Green,
    Blue
}
```

枚举类型的值可以通过枚举类型的名称来访问：

```csharp
Color c = Color.Red;
```

也可以通过枚举类型的值来访问：

```csharp
Color c = (Color)1;
```

#### 结构体

结构体是一种特殊的值类型，它是一组不同类型的变量的集合。结构体的声明如下：

```csharp
struct Point
{
    public int x;
    public int y;
}
```

结构体的成员可以是字段、方法、属性、索引器、运算符方法、事件和嵌套类型等。

结构体的实例化可以通过 `new` 关键字来实现：

```csharp
Point p = new Point();
```

也可以通过对象初始化器来实现：

```csharp
Point p = new Point { x = 1, y = 2 };
```
