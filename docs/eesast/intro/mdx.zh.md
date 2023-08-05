---
title: 使用 MDX 撰写文档
---

本项目使用 [`Docusaurus`](https://docusaurus.io/)，其使用 [`MDX`](https://mdxjs.com/) 增强了 `Markdown` 的功能。

简而言之，在 `MDX` 的加持下，我们可以在 `Markdown` 文档中使用 `JSX` 和 `React 组件`：

```jsx
export const Highlight = ({ children, color }) => (
  <span
    style={{
      backgroundColor: color,
      borderRadius: "2px",
      color: "#fff",
      padding: "0.2rem",
    }}
  >
    {children}
  </span>
);

<Highlight color="#25c2a0">Docusaurus green</Highlight> 和 <Highlight color="#1877F2">
  Facebook blue
</Highlight> 在 `MDX` 的支持下以相应颜色高亮显示。
```

<span style="background-color: rgb(37, 194, 160); border-radius: 2px; color: rgb(255, 255, 255); padding: 0.2rem;">Docusaurus green</span> 和 <span style="background-color: rgb(24, 119, 242); border-radius: 2px; color: rgb(255, 255, 255); padding: 0.2rem;">Facebook blue</span> 在 `MDX` 的支持下以相应颜色高亮显示。

> 上面这段是 Xuc 直接编写 `HTML` 来还原其效果的，并非真正的 `MDX`。遗憾的是，Material for MkDocs 暂时不支持 `MDX`，因此我们无法在此处展示真正的 `MDX`。在之后的文档中出现的所有 `MDX` 都会被删除。

---

本项目默认使用 `.mdx` 标识使用或未来可能使用此功能的文件，且默认对所有 `.md` 也视为开启此功能。推荐想使用此功能的贡献者安装相关插件以优化编辑体验。
