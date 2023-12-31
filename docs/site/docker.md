# Docker

Docker 是一个开放源代码的开放平台软件，用于开发应用、交付应用和运行应用。Docker 容器与虚拟机类似，但二者在原理上不同。容器是将操作系统层虚拟化，虚拟机则是虚拟化硬件，因此容器更具有便携性、更能高效地利用服务器。 容器更多的用于表示软件的一个标准化单元。由于容器的标准化，因此它可以无视基础设施的差异，部署到任何一个地方。另外，Docker 也为容器提供更强的业界的隔离兼容。

## 安装

### Windows

在安装 Docker 之前，需要先安装 WSL2，WSL2 是 Windows Subsystem for Linux 的第二代版本，它是一个在 Windows 10 上运行的 Linux 兼容环境层。

安装完 WSL2 之后，即可安装 Docker Desktop for Windows。

### Linux

=== "Debian"

    如果安装过旧版本的 Docker，需要先卸载旧版本：

    ```bash
    sudo apt-get remove docker docker-engine docker.io containerd runc
    ```

    安装依赖：

    ```bash
    sudo apt-get update
    sudo apt-get install apt-transport-https ca-certificates curl gnupg lsb-release
    ```

    添加 Docker 的官方 GPG 密钥：

    ```bash
    curl -fsSL https://download.docker.com/linux/debian/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
    ```

    === "网络环境畅通"

        添加 Docker 的官方源：

        ```bash
        echo \
          "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/debian \
          $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
        ```

    === "网络环境不畅通"

        添加清华大学开源软件镜像站源：

        ```bash
        echo \
          "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://mirrors.tuna.tsinghua.edu.cn/docker-ce/linux/debian \
          $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
        ```

    安装 Docker Engine：

    ```bash
    sudo apt-get update
    sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
    ```

=== "Ubuntu"

    如果安装过旧版本的 Docker，需要先卸载旧版本：

    ```bash
    sudo apt-get remove docker docker-engine docker.io containerd runc
    ```

    安装依赖：

    ```bash
    sudo apt-get update
    sudo apt-get install apt-transport-https ca-certificates curl gnupg lsb-release
    ```

    添加 Docker 的官方 GPG 密钥：

    ```bash
    curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
    ```

    === "网络环境畅通"

        添加 Docker 的官方源：

        ```bash
        echo \
          "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu \
          $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
        ```

    === "网络环境不畅通"

        添加清华大学开源软件镜像站源：

        ```bash
        echo \
          "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://mirrors.tuna.tsinghua.edu.cn/docker-ce/linux/ubuntu \
          $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
        ```

    安装 Docker Engine：

    ```bash
    sudo apt-get update
    sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
    ```

=== "CentOS"

    如果安装过旧版本的 Docker，需要先卸载旧版本：

    ```bash
    sudo yum remove docker \
                  docker-client \
                  docker-client-latest \
                  docker-common \
                  docker-latest \
                  docker-latest-logrotate \
                  docker-logrotate \
                  docker-engine
    ```

    安装依赖：

    ```bash
    sudo yum install -y yum-utils \
      device-mapper-persistent-data \
      lvm2
    ```

    === "网络环境畅通"

        添加 Docker 的官方源：

        ```bash
        sudo yum-config-manager --add-repo https://download.docker.com/linux/centos/docker-ce.repo
        ```

    === "网络环境不畅通"

        添加清华大学开源软件镜像站源：

        ```bash
        sudo yum-config-manager --add-repo https://download.docker.com/linux/centos/docker-ce.repo
        sudo sed -i 's+https://download.docker.com+https://mirrors.tuna.tsinghua.edu.cn/docker-ce+' /etc/yum.repos.d/docker-ce.repo
        ```

    安装 Docker Engine：

    ```bash
    sudo yum install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
    ```
