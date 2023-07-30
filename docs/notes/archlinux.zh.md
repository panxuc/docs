# Arch Linux

[**:simple-archlinux: 一个轻量的、灵活的 Linux 发行版**](https://archlinux.org/)

## 安装 Arch Linux

下载镜像：

- 官网：https://archlinux.org/download/
- 清华大学开源软件镜像站：https://mirrors.tuna.tsinghua.edu.cn/archlinux/iso/

### 正常途径安装

参见 [Arch Linux 官方安装指南](https://wiki.archlinuxcn.org/wiki/%E5%AE%89%E8%A3%85%E6%8C%87%E5%8D%97)。

#### 准备安装介质

Arch Linux可以被制作成多种类型的安装介质，如 U 盘 、光盘和带有 PXE 的网络安装映像。请您按照合适的文章与教程，使用所选映像为自己制作、准备安装介质。

#### 启动到 live 环境

如果你很懒惰，你可以选用 [`archinstall`](#archinstall) 或 [`arch-linux-gui`](#arch-linux-gui) 安装，但是这样很无趣。Arch Linux 最大的乐趣在于安装，所以我还是推荐你使用正常途径安装。

#### 配置控制台键盘布局

在安装之前，你需要配置控制台的键盘布局。如果你使用的是英文键盘，那么你可以跳过这一步。

列出所有键盘布局。

```bash
# ls /usr/share/kbd/keymaps/**/*.map.gz
```

更改键盘布局。

```bash
# loadkeys <键盘布局>
```

#### 配置网络

如果你使用的是有线网络，那么你可以跳过这一步。

列出所有网络接口。

```bash
# ip link
```

启用网络接口。

```bash
# ip link set <网络接口> up
```

### 使用 `archinstall` 安装

`archinstall` 是 Arch Linux 官方提供的安装工具，可以在安装过程中自动化完成一些步骤。它已包含于镜像中，故可以直接运行。

```bash
# archinstall
```

### 使用 `arch-linux-gui` 安装

下载镜像：

- 清华大学开源软件镜像站：https://mirrors.tuna.tsinghua.edu.cn/osdn/arch-linux-gui/

`arch-linux-gui` 的安装与 :simple-manjaro: Manjaro 类似。