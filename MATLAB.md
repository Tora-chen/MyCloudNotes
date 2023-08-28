<!-- title: MATLAB -->
<meta name="viewport" content="width=device-width, initial-scale=1.0">

## 二维图和三维图

#### 线图
plot函数可以创建二维线图。

```matlab
x = linspace(0,2*pi);
y = sin(x);
plot(x,y)
```
以下指令标记轴并添加标题。

```matlab
xlabel("x")
ylabel("sin(x)")
title("Plot of the Sine Function")
```

plot 函数的第三个输入参数指定线条类型。
```matlab
plot(x, y, "r--") % 红色虚线
plot(x, y, "r-") % 红色实线
plot(x, y, "b:") % 蓝色点线
```

默认情况下，每次绘图MATLAB都会清空图窗。使用hold on保留图窗。在使用 hold off 或关闭窗口之前，当前图窗窗口中会显示所有绘图。

这样可以显示一个三维曲面图：
```matlab
syms x y
f = x^2 + y^2;
fsurf(f, [-1, 1, -1, 1]);
```

使用 tiledlayout 或 subplot 在同一窗口的不同部分显示多个绘图。
```matlab
t = tiledlayout(2,2);
title(t,"Trigonometric Functions")
x = linspace(0,30);

nexttile
plot(x,sin(x))
title("Sine")

nexttile
plot(x,cos(x))
title("Cosine")

nexttile
plot(x,tan(x))
title("Tangent")

nexttile
plot(x,sec(x))
title("Secant")
```

### 结构化编程
if-else结构示例：
```matlab
a = 10;
if a == 1
    disp('a == 1');
elseif a == 2
    disp("a == 2");
else 
    disp("a == 10");
end
```
switch-case示例:
```matlab
a = 10;
switch a
    case 1
        disp('a == 1');
    case 2
        disp("a == 2");
    otherwise
        disp("a == 10");
end
```

for循环示例：
```matlab
sum = 0;
for i=1:2:999
    disp(i);
    sum = sum + i;
end
disp(sum);
```

预分配：
```matlab
A = [0 -1 4; ...
     9 -14 25; ... % 用...表示换行
     -34 49 64];
B = zeros(3, 3);
for i = 1:size(A,1)
    for j = 1:size(A,2)
        B(i, j) = A(i, j);
    end
end
disp(B);
```
disp(B)
MATLAB中 ~= 表示不等于。

