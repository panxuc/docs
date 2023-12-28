# Android

[**:fontawesome-brands-android: 一个颠覆移动设备功能的平台**](https://www.android.com/)

## 刷机

刷机可分为卡刷和线刷。卡刷是指使手机进入 recovery 模式，通过写入固件的压缩包来更新系统固件；或是将压缩包放入手机内的存储空间直接进行 OTA 更新。线刷是指将手机连接计算机，使用 Android 调试桥接器(ADB)直接将固件、系统底层、驱动程序等等写入手机，如 fastboot 模式；或是使用其它的软件工具包刷入，如高通 9008 等等。

时至今日，就中国大陆内外各大 Android 手机品牌而言，要获取较为完整的 Root 权限，刷机是必不可少的。刷机的好处是可以获得更多的权限，如修改系统文件、安装第三方应用商店、安装第三方 ROM 等等。刷机的坏处是可能会失去保修，甚至变砖。因此，刷机前请务必做好备份，以防万一。

???+ tip "刷机小贴士"

    - 刷机前请务必做好备份。
    - 尽量选择解锁 Bootloader 后仍然有保修的品牌进行刷机，如 :simple-xiaomi: 小米、:simple-oneplus: 一加等。
    - 不要在晚上刷机，否则您可能会失眠。

零基础者可观看下方视频。

![type:video](https://player.bilibili.com/player.html?aid=640532086&bvid=BV1BY4y1H7Mc&cid=571263354&page=1&autoplay=false)

### SDK Platform-Tools

刷机的基础是在电脑中安装 SDK Platform-Tools，即 ADB 和 fastboot 工具包。在 Windows 中，可以通过[官方教程](https://developer.android.com/studio/releases/platform-tools)安装；在 Linux 中，可以通过包管理器安装，如 Arch Linux 中的`android-tools`包。

在终端中输入 `adb`，若显示帮助信息，则已成功配置好。

### :simple-xiaomi: 小米手机

小米手机的刷机非常简单，官方给出较为简略的[教程](https://www.mi.com/service/support)。

登录小米账号后可以在手机的`设置`→`更多设置`→`开发者选项`绑定账号和设备。一周后，可以用[官方解锁工具](http://www.miui.com/unlock/download.html)申请解锁 Bootloader。解锁 Bootloader 后即可刷机。

Xiaomi 14 发售以来，申请解锁 Bootloader 需要达到以下要求：

- 小米社区等级达到 5 级
- 完成实名验证
- 参与答题（答题不合格需要等待 7 天后再次答题）
- 每年每用户最多解锁 3 台设备
- 解锁等待期为 72 小时

### :simple-huawei: 华为手机

> 参见[【长文预警】华为麒麟设备刷入类原生安卓详细教程](https://www.bilibili.com/read/cv16978084/)。

华为手机的刷机与小米手机的刷机相比，十分复杂。目前虽然有一些较为成熟的方案，但其机型适配数仍然寥寥。本文将试图介绍一种基于 Treble 的刷机方案。

???+ info inline end "此方法适配机型"

  系统均必须为 EMUI 8 或 EMUI 9。

  - Kirin 980
    - HUAWEI Mate 20
    - HUAWEI Mate 20 Pro
    - HUAWEI Mate 20 X
    - HUAWEI P30 Pro
    - HUAWEI P30
    - Honor View 20
  - Kirin 970
    - HUAWEI Mate 10
    - HUAWEI Mate 10 Pro
    - HUAWEI P20
    - HUAWEI P20 Pro
    - Honor 10
    - Honor Note 10
    - Honor Play
    - Honor View 10
  - Kirin 960
    - HUAWEI Mate 9
    - HUAWEI Mate 9 Pro
    - HUAWEI P10
    - HUAWEI P10 Plus
    - Honor 9
    - Honor 8 Pro
  - Kirin 955
    - HUAWEI P9
    - HUAWEI P9 Plus
    - Honor V8
  - Kirin 950
    - HUAWEI Mate 8
    - Honor 8
    - Honor V8
  - Kirin 710
    - HUAWEI Mate 20 Lite
    - HUAWEI Nova 4E
    - HUAWEI P Smart 2019
    - Honor 8X
    - Honor 10 Lite
  - Kirin 659
    - HUAWEI Mate 10 Lite
    - HUAWEI P Smart
    - HUAWEI P20 Lite
    - Honor 7X
    - Honor 9 Lite
  - Kirin 658
    - HUAWEI P10 Lite
  - Kirin 655
    - HUAWEI P8 Lite 2017
    - Honor 6X
  - Tablets (Kirin 960)
    - HUAWEI MediaPad M5 8.4"
    - HUAWEI MediaPad M5 10.8"
    - HUAWEI MediaPad M5 Pro

???+ info "何为 Treble"

  Android 8.0 版本的一项新元素是 Project Treble。这是 Android 操作系统框架在架构方面的一项重大改变，旨在让制造商以更低的成本更轻松、更快速地将设备更新到新版 Android 系统。Project Treble 适用于搭载 Android 8.0 及后续版本的所有新设备（这种新的架构已经在 Pixel 手机的开发者预览版中投入使用）。

  利用新的供应商接口，Project Treble 将供应商实现（由芯片制造商编写的设备专属底层软件）与 Android 操作系统框架分离开来。

  Android 7.x 及更早版本中没有正式的供应商接口，因此设备制造商必须更新大量 Android 代码才能将设备更新到新版 Android 系统：

  ![Treble 推出前的 Android 更新环境](https://source.android.com/static/docs/core/architecture/images/treble_blog_before.png?)

  Treble 提供了一个稳定的新供应商接口，供设备制造商访问 Android 代码中特定于硬件的部分，这样一来，设备制造商只需更新 Android 操作系统框架，即可跳过芯片制造商直接提供新的 Android 版本：

  ![Treble 推出后的 Android 更新环境](https://source.android.com/static/docs/core/architecture/images/treble_blog_after.png)

#### 解锁 Bootloader

这种方案要求手机系统版本必须为 EMUI 8 或 EMUI 9，且系统更新补丁在 2019 年前。若您的设备已经升级 EMUI 10 或 Harmony OS，请尝试使用 [HiSuite 华为手机助手](https://consumer.huawei.com/cn/support/hisuite/)降级。

首先，您需要解锁华为手机的 Bootloader，但华为官方从 2018 年 5 月起，不再提供解锁 Bootloader 的服务。因此，需要通过第三方的解锁服务来解锁 Bootloader。这可以通过拆机后短接获取解锁码或者在淘宝或酷安等数码论坛上找一个解锁服务来解决。

获取解锁码后，用数据线连接手机和计算机，长按音量下键和电源键，进入 fastboot 模式。在计算机中打开命令行，输入 `fastboot devices`，若显示设备号，则说明已经成功连接。输入 `fastboot oem unlock <解锁码>`，即可解锁 Bootloader。

#### 获取文件

1. **底包文件（可选）**，包含四个文件。若您的 EMUI 系统更新补丁在 2019 年后，您需要获取系统更新补丁在 2019 年前的底包文件。请获取适用于您设备的文件，不能与其它型号设备混用，否则后果自负，不同设备这四个文件仅文件名相同，具体如下：

  ``` bash
  HuRUpdater_0.XX.zip # (1)!
  update.zip
  update_all_hw.zip
  update_data_public.zip # (2)!
  ```

  1. 不同设备仅文件 `HuRUpdater_0.XX.zip` 通用
  2. 下方三个文件可能获取较为困难。可以多在酷安等论坛寻找，或试着访问 [Huawei Firm Finder](https://professorjtj.github.io/)。

2. **`TWRP.img`（可选）**，推荐“奇兔刷机”适配的 TWRP，由残芯大佬做了 Kirin 设备兼容性适配、语言本土化，且拥有本方案必须的“解除 data 强制加密” 功能，故本方案使用此 TWRP。
3. **类 AOSP 的 GSI 包**，如 LineageOS、HavocOS 等。不过能够在 Kirin 设备上表现尚可的一般是社区提供的非官方包，请不要对其性能优化和使用体验抱有过多期待。
4. **Gapps 包（可选）**，用于安装 Google 服务。请根据您的 Android 版本和设备架构选择合适的包。
5. **Magisk 包**，用于获取 Root 权限。请根据您的 Android 版本和设备架构选择合适的包。

#### 开始刷机