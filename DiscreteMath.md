<!-- 离散数学 -->
<meta name="viewport" content="width=device-width, initial-scale=1.0">

# 离散数学 <!-- omit in toc -->
- [数理逻辑](#数理逻辑)
  - [命题的分类](#命题的分类)
  - [合式公式](#合式公式)
  - [列真值表的方式](#列真值表的方式)
  - [常用命题基本公式：](#常用命题基本公式)

## 数理逻辑

- 我正在说谎（悖论，不是命题）  

### 命题的分类
- 原子命题：简单陈述句表达的判断
- 复合命题：原子命题复合而成的命题
- 复合命题的分类
  - 合取 (Conjunction) : $P∧Q$
  - 析取 (Disjunction) : $P∨Q$
  - 条件命题: $P→Q ( if\ P\ then\ Q )$
  - 双条件命题：$P\iff Q ( P\ iff\ Q )$
  - 否定命题：命题P的否定命题 $¬P$
  ---
  - 命题常量：有确定真值的命题
  - 命题变元：不确定真值的命题变量
  - 变元发指派：对命题变元的真值指派

### 合式公式
命题演算的合式公式（well-formed formula）规定为
- 单个命题变元是合式公式
- 如果A是合式公式，则$¬A$也是合式公式
- 如果A和B是合式公式，则$(A∧B),(A∨B),(A→B),(A↔B)$都是合式公式
- 有限次应用上述规则，得到的是合式公式

### 列真值表的方式
分别列出每个合式公式的真值：
|$P$|$Q$|$P \lor Q$|$P \land (P \lor Q)$|
|:-:|:-:|:-:|:-:|
|T|T|T|T|
|T|F|T|T|
|F|T|T|F|
|F|F|F|F|

### 常用命题基本公式：
- 同一律：$P∧P≡P$，$P∨P≡P$
- 吸收律：$P∧(P∨Q)≡P$，$P∨(P∧Q)≡P$
- 交换律：$P∧Q≡Q∧P$，$P∨Q≡Q∨P$
- 结合律：$P∧(Q∧R)≡(P∧Q)∧R$，$P∨(Q∨R)≡(P∨Q)∨R$
- 分配律：$P∧(Q∨R)≡(P∧Q)∨(P∧R)$，$P∨(Q∧R)≡(P∨Q)∧(P∨R)$
- **德摩根律**：$¬(P∧Q)≡¬P∨¬Q$，$¬(P∨Q)≡¬P∧¬Q$
- 互补律：$P∨¬P≡T$，$P∧¬P≡F$
- 逆否命题：$P→Q≡¬Q→¬P$
- **条件式子**：$A \to B ≡ \lnot A \lor B$

例题：  

1. 证明$(P \land Q) \lor (P \land \lnot Q) \iff P.$  
证：
$$
\begin{align*}
    (P \land Q) \lor (P \land \lnot Q) &\equiv P\land(Q \lor \lnot Q)\\
    &\equiv P \land T\\
    &\equiv P\\
\end{align*}
$$

2. 证明 $P \land (P \to Q) \to Q \iff T$.  
证：
$$
\begin{align*}
    P \land (P \to Q) \to Q 
    &\equiv P \land (\lnot P \lor Q) \to Q\\
    &\equiv F \lor (P \land Q) \to Q\\
    &\equiv P \land Q \to Q\\
    &\equiv \lnot (P \land Q) \lor Q\\
    &\equiv \lnot P \lor \lnot Q \lor Q\\
    &\equiv \lnot P \lor T\\
    &\equiv T\\
\end{align*}
$$



