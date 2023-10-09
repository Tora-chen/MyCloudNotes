<!-- 离散数学 -->
<meta name="viewport" content="width=device-width, initial-scale=1.0">

# 离散数学 <!-- omit in toc -->
- [数理逻辑](#数理逻辑)
  - [命题的分类](#命题的分类)
  - [合式公式](#合式公式)
  - [列真值表的方式](#列真值表的方式)
  - [常用命题基本公式](#常用命题基本公式)
  - [连接词的全功能集](#连接词的全功能集)
  - [对偶与范式](#对偶与范式)
    - [对偶](#对偶)
    - [范式](#范式)
    - [主范式](#主范式)

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

### 常用命题基本公式
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

### 连接词的全功能集

### 对偶与范式

---

#### 对偶
将命题 $A$ 中的 $\lor$ 换成 $\land$ ，将 $\land$ 换成 $\lor$，常量 $T$ 换成 $F$，$F$ 换成 $T$，得到的命题 $A^*$ 称为该命题的对偶。显然有 $(A^*)^* = A$

例如：$\lnot(P∨Q)∧(P∨\lnot(Q∧\lnot S))$ 的对偶是 $\lnot(P∧Q)∨(P∧\lnot(Q∨\lnot S))$。

**定理**： 
$$
\lnot A( P1,,...,Pn ) \iff A^*(\lnot P1, ..., \lnot Pn)
$$

---

#### 范式
每个命题公式都有很多与之逻辑等价的公式，其中较为符合标准的称为“范式”。  

> 定义：  
> 一个命题公式称为析取范式,当且仅当它具有形式： 
> $$A_1 \lor A_2 \lor …, \lor A_n, (n \geqslant 1)$$
> 其中 $A_1,A_2,...,A_n$ 都是由文字（即命题常元、变元和它们的否定）所组成的合取式。

$P∧Q∧R, P∨ Q ∨ R, \lnot P, \lnot (P∧Q) ∨R$ 都是析取范式。

> 定义：
> 一个命题公式称为合取范式,当且仅当它具有形式：
> $$
> A_1 \land A_2 \land …, \land A_n, (n \geqslant 1)
> $$
> 其中 $A_1,A_2,...,A_n$ 都是由命题变元或其否定所组成的**简单析取式**。

$P ∨ Q ∨ R, (P∨ Q) ∧R, \lnot P$都是合取范式，$\lnot (P∨ Q) ∧R, P∨ ( Q∧R )$ 不是合取范式。

**任意命题公式均可通过等价演算化为合取或析取范式。**

例：求 $(P \land (Q \to R)) \to S$ 的合取范式.
$$
\begin{align*}
          &(P \land (Q \to R)) \to S\\
    \equiv& \lnot (P \land (Q \to R)) \lor S\\
    \equiv& \lnot P \lor \lnot (Q \to R) \lor S\\
    \equiv& \lnot P \lor \lnot (\lnot Q \lor R) \lor S\\
    \equiv& \lnot P \lor (Q \land \lnot R) \lor S\\
    \equiv& \lnot P \lor ((Q \lor S) \land \lnot R \lor S)  \\
    \equiv& (\lnot P \lor Q \lor S) \land (\lnot P \lor \lnot R \lor S)\\
\end{align*}
$$

#### 主范式
> 定义：
> 合取式 $A_1 \land A_2 \land …, \land A_n$ 称为变元组$P_1,P_2,...,P_n$ 的一个**小项**，其中 $A_i$ 为 $P_i$ 构成的文字。

> 定义：
> 对于给定的命题公式，如果有一个等价公式，它仅由**小项的析取**所组成，则该等价式称作原式的**主析取范式**。

> 定义：
> 析取式 $A_1 \lor A_2 \lor …, \lor A_n$ 称为变元组$P_1,P_2,...,P_n$ 的一个**大项**，其中 $A_i$ 为 $P_i$ 构成的文字。

> 定义：
> 对于给定的命题公式，如果有一个等价公式，它仅由**大项的合取**所组成，则该等价式称作原式的**主合取范式**。

> 定理：
> 煮稀饭式与煮盒饭式互补。每个命题公式都有唯一的煮稀饭式和煮盒饭式。


**求煮稀饭式的方法：**

**1 真值表法**
> 定理：在一个公式的真值表中，成真赋值对应的小项做析取，即为此公式的主析取范式.

例：求 $P \to Q$ 的主析取范式.

| $P$ | $Q$ | $P \to Q$ |    对应小项    |
| :-: | :-: | :-------: |    :------:   |
| $T$ | $T$ |    $T$    |  $P \land Q$  |
| $T$ | $F$ |    $F$    |$P\land\lnot Q$|
| $F$ | $T$ |    $T$    |$\lnot P\land Q$|
| $F$ | $F$ |    $T$    |$\lnot T\land \lnot Q$|

$P→Q \iff (P\land Q) \lor (\lnot P \land Q) \lor (\lnot P \land \lnot Q)$

**2 推演法**

1. 将公式化归为析取范式。
2. 去掉析取范式中永假的小项。  
3. 合并析取范式中重复的小项。  
4. 对合取项中未出现的变元 $P$，以 $P \lor \lnot P$ 加入, 然后用分配律展开.
   
例：求 $P→((P→Q)\land \lnot(\lnot Q \lor \lnot P ))$的煮稀饭式。
$$
\begin{align*}
    &P→((P→Q)\land \lnot(\lnot Q \lor \lnot P )) \\
    &\equiv \lnot P \lor ((\lnot P \lor Q) \land (Q \land P))\\
    &\equiv \lnot P \lor ((\lnot P \land Q \land P) \lor (Q \land Q \land P))\\
    &\equiv \lnot P \lor ( P\land Q)\\
    &\equiv (\lnot P \land Q \lor \lnot Q) \lor (P \land Q)\\
    &\equiv (\lnot P \land Q) \lor (\lnot P \land \lnot Q) \lor (P \land Q)\\
\end{align*}
$$

**求煮盒饭式的方法类似。**

---


