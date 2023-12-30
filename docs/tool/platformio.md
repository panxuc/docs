# PlatformIO

## `platformio.ini`

`platformio.ini` 是 PlatformIO 的配置文件，用于配置项目的编译环境、依赖库等。

### 可配置项

- `env_default` 默认的编译环境。
- `platform` 编译环境所使用的平台，如 `espressif32`。
- `board` 编译环境所使用的开发板，如 `esp32dev`。
- `framework` 编译环境所使用的框架，如 `arduino`。
- `monitor_speed` 串口监视器的波特率。
- `build_flags` 编译时的参数。
- `board_build.partitions` 分区表文件。

### 常见问题

#### 如何使用 ESP32-S3-DevKitC-1-N8R8 的 PSRAM？

ESP32-S3-DevKitC-1-N8R8 的 PSRAM 是 8MB OT 的，需要在编译时添加 `-mfix-esp32-psram-cache-issue` 参数。同时，需要将 `board_build.arduino.memory_type` 设置为 `qio_opi`。

```ini title="platformio.ini"
[env:esp32-s3-devkitc-1]
platform = espressif32
board = esp32-s3-devkitc-1
framework = arduino
monitor_speed = 115200
build_flags =
    -DBOARD_HAS_PSRAM
    -mfix-esp32-psram-cache-issue
board_build.partitions = partitions.csv
board_build.arduino.memory_type = qio_opi
board_build.f_flash = 80000000L
board_build.flash_mode = qio
board_upload.flash_size = 8MB
```

值得注意的是， PlatformIO 不支持 OT 的 Flash，故而 ESP32-S3-DevKitC-1-N16R8V 之类的开发板无法使用 PlatformIO 进行开发。