# Arch Linux

[**:simple-archlinux: 一个轻量的、灵活的 Linux 发行版**](https://archlinux.org/)

## 安装 Arch Linux

下载镜像：

- 官网：https://archlinux.org/download/
- 清华大学开源软件镜像站：https://mirrors.tuna.tsinghua.edu.cn/archlinux/iso/

### 正常途径安装

> 参见 [Arch Linux 官方安装指南](https://wiki.archlinuxcn.org/wiki/%E5%AE%89%E8%A3%85%E6%8C%87%E5%8D%97)。

#### 准备安装介质

Arch Linux可以被制作成多种类型的安装介质，如 U 盘 、光盘和带有 PXE 的网络安装映像。

可以使用 [Rufus](http://rufus.ie/zh/) [:fontawesome-brands-github:](https://github.com/pbatard/rufus) 制作 U 盘安装介质。

#### 启动到 live 环境

如果您很懒惰，您可以选用 [`archinstall`](#archinstall) 或 [`arch-linux-gui`](#arch-linux-gui) 安装，但是这样很无趣。Arch Linux 的安装能够考查您对操作系统和 Linux 的了解程度，其高度自定义化可以让您完全掌控您的计算机；同时，当其他人看见您通过正常途径安装时会钦佩您。所以，我还是推荐您通过正常途径安装。

??? note "关于 `arch-linux-gui`"

    事实上，经过笔者测试，2023 年的 [`arch-linux-gui`](#arch-linux-gui) 安装的系统非常漂亮、省心，且自带笔记本核显驱动。同时，笔者现在也十分懒惰，所以 2023 年的笔者也推荐您使用 [`arch-linux-gui`](#arch-linux-gui) 安装。

#### 配置控制台键盘布局

在安装之前，您需要配置控制台的键盘布局。如果您使用的是英文键盘，那么您可以跳过这一步。

列出所有键盘布局。

``` bash
ls /usr/share/kbd/keymaps/**/*.map.gz
```

更改键盘布局。

``` bash
loadkeys <键盘布局>
```

#### 配置网络

如果您使用的是有线网络，那么您可以跳过这一步。

``` bash
iwctl
device list
station <您的无线网卡的名称> scan
station <您的无线网卡的名称> get-networks
station <您的无线网卡的名称> connect <您的无线网络的名称>
<您的无线网络的密码>
exit
```

#### 创建硬盘分区

``` bash
fdisk -l # (1)!
```

1.  也可以用 `lsblk`

记住硬盘名称。

``` bash
cfdisk /dev/<硬盘名称>
```

选择 `gpt` 。下表是一种对于 UEFI 与 GPT 分区表的磁盘分区方案 。

| 挂载点      | 分区                  | 分区类型                  | 建议大小                                                 |
| ----------- | --------------------- | ------------------------- | -------------------------------------------------------- |
| `/mnt/boot` | `/dev/<EFI系统分区>`  | EFI 系统分区              | 至少 300 MiB。如果您打算安装多个内核，那就是至少 1 GiB。 |
| `[SWAP]`    | `/dev/<交换空间分区>` | Linux swap (交换空间)     | 大于 512 MiB。或者根据您的计算机的内存大小来决定。       |
| `/mnt`      | `/dev/<根分区>`       | Linux x86-64 根目录 (`/`) | 剩余空间                                                 |

??? warning "关于 EFI 系统分区"

    只有在分区步骤中创建 EFI 系统分区时才需要格式化。如果这个磁盘上已经有一个 EFI 系统分区了，将它重新格式化会破坏其他已安装操作系统的引导加载程序。

格式化分区。

``` bash
mkfs.fat -F 32 /dev/<EFI系统分区>
mkswap /dev/<交换空间分区>
mkfs.ext4 /dev/<根分区>
```

挂载分区。

``` bash
mount --mkdir /dev/<EFI 系统分区> /mnt/boot
swapon /dev/<交换空间分区>
mount /dev/<根分区> /mnt
```

#### 更换 `pacman` 镜像源

> 参见[清华大学开源软件镜像站 Arch Linux 软件仓库镜像使用帮助](https://mirrors.tuna.tsinghua.edu.cn/help/archlinux/)。

编辑 `/etc/pacman.d/mirrorlist`，在文件的最顶端添加清华大学开源软件镜像站。

``` sh title="/etc/pacman.d/mirrorlist"
Server = https://mirrors.tuna.tsinghua.edu.cn/archlinux/$repo/os/$arch
```

#### 安装必须的软件包

``` bash
pacstrap -K /mnt base linux linux-firmware
```

如果要获得更完整的系统，可以安装 `base-devel`。此时也可以同时额外安装计算机的 CPU 微码包。如果计算机使用 Intel CPU，使用 `intel-ucode`，AMD CPU 则使用 `amd-ucode`。也可以暂时都不安装，等到进入系统后再安装。

#### 写入分区表

``` bash
genfstab -U /mnt >> /mnt/etc/fstab
```

#### chroot 到新安装的系统

``` bash
arch-chroot /mnt
```

#### 安装必要软件和引导程序

``` bash
pacman -S grub efibootmgr vim iwd dhcpcd sudo networkmanager
systemctl enable dhcpcd NetworkManager iwd
```

#### 设置时区

``` bash
ln -sf /usr/share/zoneinfo/Asia/Shanghai /etc/localtime
hwclock --systohc
```

#### 设置语言

``` sh title="/etc/locale.gen"
en_US.UTF-8 UTF-8
```

``` bash
locale-gen
```

``` sh title="/etc/locale.conf"
LANG=en_US.UTF-8
```

这里不建议把语言设置为 `zh_CN.UTF-8`。

#### 设置网络

``` sh title="/etc/hosts"
127.0.0.1 localhost
::1 localhost
127.0.1.1 主机名.localdomain 主机名
```

``` sh title="/etc/hostname"
主机名
```

#### 设置密码与添加用户

设置 root 密码。

``` bash
passwd
```

添加用户。

``` bash
useradd -m -G wheel -s /bin/bash <用户名>
passwd <用户名>
visudo
```

``` sh title="/etc/sudoers"
## User privilege specification
##
root ALL=(ALL:ALL) ALL

## Uncomment to allow members of group wheel to execute any command
# %wheel ALL=(ALL:ALL) ALL

## Same thing without a password
# %wheel ALL=(ALL:ALL) NOPASSWD: ALL
```

取消注释 `%wheel ALL=(ALL:ALL) ALL`。

#### 重启

``` bash
reboot
```

#### 安装图形化界面

=== "KDE Plasma"

    ``` bash
    pacman -S xorg plasma sddm konsole dolphin kate ark okular
    systemctl enable sddm
    ```
=== "GNOME"

    ``` bash
    pacman -S xorg gnome
    systemctl enable gdm
    ```

#### 添加 `archlinuxcn` 源

> 参见[清华大学开源软件镜像站 Arch Linux CN 软件仓库镜像使用帮助](https://mirrors.tuna.tsinghua.edu.cn/help/archlinuxcn/)。


``` sh title="/etc/pacman.conf"
[archlinuxcn]
SigLevel = Optional TrustAll # (1)!
Server = https://mirrors.tuna.tsinghua.edu.cn/archlinuxcn/$arch
```

1.  如果安装 `archlinuxcn-keyring` 时不会报错，可以不加。

同理可以添加 `multilib` 源以安装 32 位软件，如 [:fontawesome-brands-steam: Steam](https://archlinux.org/packages/multilib/x86_64/steam/)。

#### 添加 `AUR` 源

=== "`yay`"

    ``` sh
    git clone https://aur.archlinux.org/yay
    cd yay
    makepkg -si
    ```

    中国大陆读者请自行解决网络问题（如果有）。

=== "`paru`"

    先添加 `archlinuxcn` 源。

    ``` sh
    pacman -S paru
    ```

    显然此方法比安装 `yay` 不知道高到哪里去了。

#### 设置 `GRUB` 引导

如果您正在制作一台双操作系统计算机（如 :simple-windows11: Windows 11 + :simple-archlinux: Arch Linux），您可能需要让 `grub` 识别其他系统。

``` sh title="/etc/default/grub"
GRUB_DISABLE_OS_PROBER=false
```

``` bash
grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=<您想要在efi引导时显示的名字>
grub-mkconfig -o /boot/grub/grub.cfg
```

#### 安装显卡驱动

您可能在一台计算机上使用多张显卡（如 Intel 的集成显卡和 NVIDIA 的独立显卡）。如何合适地在 Arch Linux 使用及切换它们是一个非常复杂的问题。

如果您比较懒惰，且不需要在 Arch Linux 上玩大型游戏，您只需要安装一款通用显卡驱动 `mesa` 即可。在上述情况下，只有您的 Intel 集成显卡会工作。

然而，如果您不得不使用 NVIDIA 独立显卡，如像笔者一样，外接显示器需要连接到直连 NVIDIA 独立显卡的 DP 接口时，可以参考以下内容。

> 参见 [Optimus Manager 的上游文档](https://github.com/Askannz/optimus-manager)。

先妥善安装好 [`nvidia`](https://archlinux.org/packages/extra/x86_64/nvidia/) 驱动，再安装 [`optimus-manager`](https://aur.archlinux.org/packages/optimus-manager) （通过 `yay` 或 `paru`）。

安装之后，`optimus-manager` 守护进程并不会自动启动，您可以使用 `systemctl enable --now optimus-manager.service` 设置它开机启动并立即启动。

它可能并不能如它所宣称的那样正常切换显卡，不过我们可以设置它在不同电源模式下使用什么显卡，这样成功几率可能高一点。

通过安装 [`optimus-manager-qt`](https://aur.archlinux.org/packages/optimus-manager-qt) （通过 `yay` 或 `paru`）可以在系统托盘中可视化地切换显卡。

#### 基本完成？

接下来请使用您可能安装并失败了好几遍的 Arch Linux。

### 使用 `archinstall` 安装

`archinstall` 是 Arch Linux 官方提供的安装工具，可以在安装过程中自动化完成一些步骤。它已包含于镜像中，故可以直接运行。

``` bash
archinstall
```

### 使用 `arch-linux-gui` 安装

下载镜像：

- 官网：https://archlinuxgui.com/
- ~~（OUTDATED）清华大学开源软件镜像站：https://mirrors.tuna.tsinghua.edu.cn/osdn/arch-linux-gui/~~

`arch-linux-gui` 的安装与 [:simple-manjaro: Manjaro](https://manjaro.org/) 类似。

## 使用 Arch Linux