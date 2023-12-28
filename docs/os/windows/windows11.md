# Windows 11

## 安装 Windows 11

下载镜像：

- 官网：https://www.microsoft.com/zh-cn/software-download/windows11
- MSDN（旧）：https://msdn.itellyou.cn
- MSDN（新）：https://next.itellyou.cn

## 使用 Windows 11

### 优化

#### 将 `GBK` 编码改为 `UTF-8`

Windows 11 在简体中文环境下默认使用 `GBK` 编码，这会导致一些软件无法正常显示或工作。但是中国大陆地区的部分开发者习惯于使用 `GBK` 编码，因此如果您将编码改为 `UTF-8`，另外一些软件可能无法正常显示。

您可以通过以下方法将其改为 `UTF-8` 编码：

打开 `控制面板` → `区域` → `管理` → `更改系统区域设置...` → `Beta: 使用 Unicode UTF-8 提供全球语言支持` → `确定` → `重新启动`。

??? note "关于简体中文环境下的 Windows 上的 C++ 语言"

  在上述操作后，您可能发现您编写的 C++ 程序无法正常读取中文。这是因为 `cin` 读取的内容默认为 `GBK` 编码，您可以使用以下代码将其改为 `UTF-8` 编码：

  ``` cpp
  #include <iostream>
  #include <io.h>
  #include <fcntl.h>
  using namespace std;
  int main() {
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    wstring s;
    wcin >> s;
    wcout << s << endl;
    return 0;
  }
  ```

总之，由于 Microsoft 的愚蠢的本地化设计，您可能需要在 `GBK` 和 `UTF-8` 之间来回切换。所以，为了避免不必要的麻烦，我建议您使用英文环境。

#### 将简体中文环境改为英文环境

1. 打开 `设置` → `时间与语言` → `语言` → `首选语言` → `添加语言` → `英语（美国）` → `选中` → `下一步` → `安装` → `完成` → `选中` → `选为默认` → `选中` → `选为默认` → `删除` → `确定` → `重新启动`。
2. 打开 `控制面板` → `区域` → `格式` → `英语（美国）` → `应用` → `确定` → `重新启动`。
3. 打开 `控制面板` → `区域` → `管理` → `欢迎屏幕和新用户帐户` → `复制当前的非 Unicode 程序设置` → `确定` → `重新启动`。