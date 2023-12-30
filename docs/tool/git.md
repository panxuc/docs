# Git

Git是目前世界上最先进的分布式版本控制系统，可以有效、高速地处理从很小到非常大的项目版本管理。

## 安装

### 用户配置

安装完成 Git 后，需要设置用户信息。

```bash
git config --global user.name "Your Name"
git config --global user.email "email@example.com"
```

此外，可以设置 Git 的默认编辑器、差异分析工具等。

```bash
git config --global core.editor vim
git config --global merge.tool vimdiff
```

如果想要查看当前的配置，可以使用 `git config --list` 命令，或者查看 `~/.gitconfig` 文件。

### SSH 配置

如果想要使用 SSH 协议与远程仓库通信，需要先配置 SSH 密钥。

```bash
ssh-keygen -t rsa -C "email@example.com"
```

然后将 `~/.ssh/id_rsa.pub` 文件中的内容添加到远程仓库的 SSH 密钥中。

## 创建版本库

版本库又名仓库，英文名 repository，可以简单理解为一个目录，这个目录里面的所有文件都可以被 Git 管理起来，每个文件的修改、删除，Git 都能跟踪，以便任何时刻都可以追踪历史，或者在将来某个时刻可以“还原”。

### 初始化版本库

要使用 Git 管理一个文件夹，首先需要进入这个文件夹，然后执行 `git init` 命令。

```bash
git init
```

这样就在当前目录下创建了一个名为 `.git` 的文件夹，这个文件夹是 Git 来跟踪管理版本库的。

当然，也可以从远程仓库克隆一个版本库到本地。

```bash
git clone <远程仓库地址>
```

通常，远程仓库地址以 `https://` 或 `git://` 开头，也可以使用 `ssh` 协议。

### 添加文件

在版本库中添加文件，需要先将文件添加到暂存区。

```bash
git add <文件名>
```

如果想要一次性将所有修改过的文件都添加到暂存区，可以使用 `git add .` 命令。

### 提交文件

将暂存区的文件提交到当前分支。

```bash
git commit -m "提交说明"
```

提交说明应该遵循一定的格式，让人一目了然。

### 查看状态

可以使用 `git status` 命令查看当前版本库的状态。

```bash
git status
```

如果当前版本库没有任何修改，则会显示 `nothing to commit, working tree clean`。反之，则会显示哪些文件被修改了，但是还没有提交。例如：

```bash
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
  modified:   git.md

no changes added to commit (use "git add" and/or "git commit -a")
```

### 查看修改

可以使用 `git diff` 命令查看文件的修改。

```bash
git diff <文件名>
```

如果想要查看已经暂存起来的文件的修改，可以使用 `git diff --cached` 命令。

在上面的例子中，可以看到 `git.md` 文件被修改了，但是还没有提交。`git diff` 会输出：

```diff
diff --git a/git.md b/git.md
index 5b6d6a6..b2b2b2b 100644
--- a/git.md
+++ b/git.md
@@ -1,4 +1,4 @@
-# Git
+# Git - 版本控制系统

 Git是目前世界上最先进的分布式版本控制系统，可以有效、高速地处理从很小到非常大的项目版本管理。
```

我们可以看到，`git.md` 文件的第一行被修改了。在知道了文件的修改之后，就可以决定是否要提交了。

### 查看历史

可以使用 `git log` 命令查看提交历史。

```bash
git log
```

如果想要查看每次提交的详细信息，可以使用 `git log --pretty=fuller` 命令。

```bash
commit 5b6
Author: Your Name <email@example.com>
Date:   Mon Oct 18 21:00:00 2021 +0800

        提交说明
```

如果想要查看每次提交的简略信息，可以使用 `git log --pretty=oneline` 命令或 `git log --oneline` 命令。

```bash
5b6 提交说明
```

### 回退版本

如果我们发现提交的版本有问题，想要回退版本，可以使用以下命令：

- `git reset --hard HEAD^`：回退到上一个版本。
- `git reset --hard HEAD^^`：回退到上上一个版本。
- `git reset --hard HEAD~100`：回退到上 100 个版本。
- `git reset --hard <commit_id>`：回退到指定的版本。
- `git reset --hard origin/master`：回退到远程仓库的版本。
- `git reset --hard`：回退到最新的版本。

可以使用 `git log` 命令查看每个版本的 `commit_id`，使用 `git reflog` 命令查看每一次命令。

### 撤销修改

如果我们发现修改的文件有问题，想要撤销修改，可以使用以下命令：

- `git restore <文件名>`：撤销工作区的修改。
- `git restore --staged <文件名>`：撤销暂存区的修改。
- `git checkout -- <文件名>`：撤销工作区的修改。
- `git reset HEAD <文件名>`：撤销暂存区的修改。

### 删除文件

一般而言，我们可以直接在文件管理器中删除文件，然后使用 `git add` 命令将删除操作添加到暂存区，再使用 `git commit` 命令提交。

当然，也可以使用 `git rm` 命令删除文件，然后使用 `git commit` 命令提交。

```bash
git rm <文件名>
```

如果想要恢复删除的文件，可以使用 `git restore <文件名>` 命令。

### 远程仓库

如果想要添加远程仓库，可以使用 `git remote add` 命令。

```bash
git remote add <远程仓库名> <远程仓库地址>
```

如果想要将本地仓库的提交推送到远程仓库，可以使用 `git push` 命令。

```bash
git push <远程仓库名> <分支名>
```

如果想要将远程仓库克隆到本地，可以使用 `git clone` 命令。

```bash
git clone <远程仓库地址>
```

如果想要将远程仓库的修改拉取到本地，可以使用 `git pull` 命令。

```bash
git pull <远程仓库名> <分支名>
```

如果想要查看远程仓库的信息，可以使用 `git remote` 命令，如果想要查看远程仓库的详细信息，可以使用 `git remote -v` 命令。

```bash
git remote
```

如果想要删除远程仓库，可以使用 `git remote rm` 命令。

```bash
git remote rm <远程仓库名>
```

如果想要重命名远程仓库，可以使用 `git remote rename` 命令。

```bash
git remote rename <远程仓库名> <新的远程仓库名>
```

如果想要查看远程仓库的分支，可以使用 `git branch -r` 命令。

```bash
git branch -r
```


## 分支管理

### 创建分支

在 Git 中，使用 `git branch` 命令可以查看当前分支。

```bash
git branch
```

而使用 `git branch <分支名>` 命令可以创建一个新的分支。

```bash
git branch <分支名>
```

较新的 Git 版本中，可以使用 `git switch -c <分支名>` 命令创建一个新的分支。

```bash
git switch -c <分支名>
```

### 切换分支

使用 `git checkout <分支名>` 命令可以切换到指定的分支。

```bash
git checkout <分支名>
```

较新的 Git 版本中，可以使用 `git switch <分支名>` 命令切换到指定的分支。

```bash
git switch <分支名>
```

### 合并分支

使用 `git merge <分支名>` 命令可以将指定的分支合并到当前分支。

```bash
git merge <分支名>
```

### 删除分支

使用 `git branch -d <分支名>` 命令可以删除指定的分支。

```bash
git branch -d <分支名>
```

### 查看分支

使用 `git log --graph` 命令可以查看分支合并图。

```bash
git log --graph
```

它会输出类似下面的内容：

```bash
*   commit 5b6
|\  Merge: 4b2 3a1
| | Author: Your Name <email@example.com>
| | Date:   Mon Oct 18 21:00:00 2021 +0800
| |
| |     合并分支
| |
| * commit 4b2
| | Author: Your Name <email@example.com>
| | Date:   Mon Oct 18 21:00:00 2021 +0800
| |
| |     提交说明
| |
| * commit 3a1
|/  Author: Your Name <email@example.com>
|   Date:   Mon Oct 18 21:00:00 2021 +0800
|
|       提交说明
|
* commit 2b3
| Author: Your Name <email@example.com>
| Date:   Mon Oct 18 21:00:00 2021 +0800
|
|     提交说明
|
* commit 1a4

```

### 解决冲突

当我们在合并分支时，如果两个分支都修改了同一个文件的同一行，就会产生冲突。此时，Git 会提示我们手动解决冲突。

```bash
Auto-merging git.md
CONFLICT (content): Merge conflict in git.md
Automatic merge failed; fix conflicts and then commit the result.
```

此时，我们可以看看冲突的文件的内容，会发现冲突的地方会被标记出来。

```diff
<<<<<<< HEAD
# Git
=======
# Git - 版本控制系统
>>>>>>> <分支名>
```

Git 会使用 `<<<<<<<`、`=======`、`>>>>>>>` 标记出不同分支的内容。面对这种情况，最好使用支持 Git 的编辑器，例如 VS Code，它会自动标记出冲突的地方，我们只需要手动修改。

修改完成后，使用 `git add` 命令将修改添加到暂存区，再使用 `git commit` 命令提交即可。

## 标签管理

### 创建标签

使用 `git tag <标签名>` 命令可以创建一个新的标签。

```bash
git tag <标签名>
```

如果想要查看所有标签，可以使用 `git tag` 命令。

```bash
git tag
```

如果想要查看标签的详细信息，可以使用 `git show <标签名>` 命令。

```bash
git show <标签名>
```

### 删除标签

使用 `git tag -d <标签名>` 命令可以删除指定的标签。

```bash
git tag -d <标签名>
```

### 推送标签

使用 `git push origin <标签名>` 命令可以将指定的标签推送到远程仓库。

```bash
git push origin <标签名>
```

如果想要一次性将所有标签都推送到远程仓库，可以使用 `git push origin --tags` 命令。

```bash
git push origin --tags
```

### 删除远程标签

使用 `git push origin :refs/tags/<标签名>` 命令可以删除远程仓库的指定标签。

```bash
git push origin :refs/tags/<标签名>
```

## 添加子仓库

如果想要将一个仓库作为另一个仓库的子仓库，可以使用 `git submodule` 或者 `git subtree` 命令。个人认为 `git subtree` 命令更好用一些。因为 `git submodule` 命令会在父仓库中创建一个 `.gitmodules` 文件，而 `git subtree` 命令不会，它几乎是透明的。

### 添加子仓库

使用 `git subtree add --prefix=<子仓库目录> <子仓库地址> <子仓库分支>` 命令可以将一个仓库作为另一个仓库的子仓库。

```bash
git subtree add --prefix=<子仓库目录> <子仓库地址> <子仓库分支>
```

本仓库就在 [`/docs/coursework/daa`](../coursework/daa/README.md) 目录下添加了子仓库 [`Panxuc/DataAndAlgorithm-Homework`](https://github.com/Panxuc/DataAndAlgorithm-Homework.git)。故而，可以使用以下命令将其添加为子仓库。

```bash
git subtree add --prefix=docs/coursework/daa https://github.com/Panxuc/DataAndAlgorithm-Homework.git main
```

### 更新子仓库

使用 `git subtree pull --prefix=<子仓库目录> <子仓库地址> <子仓库分支>` 命令可以更新子仓库。

```bash
git subtree pull --prefix=<子仓库目录> <子仓库地址> <子仓库分支>
```

在本仓库中，每当仓库 [`Panxuc/DataAndAlgorithm-Homework`](https://github.com/Panxuc/DataAndAlgorithm-Homework.git) 更新时，可以使用以下命令更新子仓库。

```bash
git subtree pull --prefix=docs/coursework/daa https://github.com/Panxuc/DataAndAlgorithm-Homework.git main
```

### 推送子仓库

使用 `git subtree push --prefix=<子仓库目录> <子仓库地址> <子仓库分支>` 命令可以推送子仓库。

```bash
git subtree push --prefix=<子仓库目录> <子仓库地址> <子仓库分支>
```

在本仓库中，如果对 `/docs/coursework/daa` 目录下的文件进行了修改，可以使用以下命令推送子仓库。

```bash
git subtree push --prefix=docs/coursework/daa https://github.com/Panxuc/DataAndAlgorithm-Homework.git main
```

## 图形化界面

虽然 Git 自带了命令行工具，但是处于方便使用的考虑，我们可以使用图形化界面来管理版本库。

VS Code 是一个非常好用的编辑器，它也支持 Git，我们可以使用 VS Code 来管理版本库。

在 VS Code 中，可以使用 ++ctrl+shift+g+g++ 快捷键打开 Git 管理界面。