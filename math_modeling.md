<!-- title: 数学建模 -->

## 算法部分
1. 线性规划
$$max\ \ y = 40x_1 +20x_2 $$
$$s.t.\bigg \{\  \begin{matrix}
    x_1+x_2 \leq 6\\
    x_1 \geq 1, x_2 \geq 1\\
    240x_1+120x_2<=1200
\end{matrix}$$

$s.t$: 约束条件

Linprog 函数

    [x, fval] = linprog(f, A, b, Aeq, beq, lb, ub)

- 模型化为matlab标准型：目标函数最小值、约束条件小于等于号或等于号。
  如果是大于等于号，可以通过乘-1转化。
- x 返回最优解的变量取值， fval返回目标函数的最优值