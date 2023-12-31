# 邮件

有域名之后，搭建一个自己的邮件服务是一件很酷的事情。

我们可以仅仅通过转发邮件来实现接收邮件，也可以通过企业微信等第三方服务来实现邮件的收发，也可以通过自己搭建邮件服务来实现邮件的收发。

## 通过转发邮件来实现接收邮件

像 NameSilo 这样的域名服务商，提供了免费的邮件转发服务，我们可以通过这个服务来实现接收邮件。

在 NameSilo 的 Domain Manager 中，找到你的域名，点击右侧的 Options 中的 Manage Email Forwarding for this domain，进入 Email Forwarding 管理页面。

如果该域名使用的不是 NameSilo 的 DNS 服务，那么需要在 DNS 服务商处添加 MX 记录，将邮件转发到 NameSilo 的服务器上。

在 Email Forwarding 管理页面，在 Add/Change an Email Forward 中，填写你的邮箱地址，然后点击 Add/Change Email Forwarding，即可将邮件转发到你的邮箱。

设置完成后，需要等待约 30 分钟，才能生效。

## 通过企业微信等第三方服务来实现邮件的收发

通过企业微信等第三方服务来实现邮件的收发，需要先成为一个企业的管理员。推荐自己建立一个企业，这样可以免费使用。

进入企业微信的后台，添加自己的域名，然后根据提示添加 MX 记录，将邮件转发到企业微信的服务器上。

设置完成后，生效时间视 DNS 服务商而定，Cloudflare 和国内服务商一般都是秒过。

这种方法的优点是可以便捷地通过微信或企业微信来收发邮件，缺点是在企业微信建立企业需要实名认证。

## 通过自己搭建邮件服务来实现邮件的收发

通过自己搭建邮件服务来实现邮件的收发，需要先拥有一个服务器，然后在服务器上安装如 [docker-mailserver](https://docker-mailserver.github.io/docker-mailserver/latest/) 这样的邮件服务。