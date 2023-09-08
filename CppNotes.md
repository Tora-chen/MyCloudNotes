<!-- title: 面向对象 -->
<h2>2.1</h2>
<p>抽象的作用是表示一类事物的本质。</p>
<p>类是对象的抽象，而对象则是类的特例，或者说是类的具体表现</p>
<br>
<p>多态性是指：由继承而产生的相关的不同的类，其对象对同一消息会作出不同的响应。</p>
<br>
<p>面向过程：</p>
<p>　　程序 = 算法 + 数据结构</p>
<p>面向对象：</p>
<p>　　对象 = 算法 + 数据结构</p>
<p>　　程序 = 对象s + 消息</p>
<br>
<p>消息的作用就是对对象的控制。</p>
<br>
<p>类的公用接口与私有实现的分离形成了信息隐蔽。</p>
<p>如"stud.display()"就是一个发给对象的消息。</p>
<p>参数初始化表：</p>

```cpp
Box (int h, int w, int len) : height(h), width(w), length(len) { }
```

<p>如果数据成员是数组，则应当在构造函数的函数体中用语句对其赋值，而不是在参数初始化表中对其初始化。如</p>

```cpp
Student(int n, char s, nam[]):num(n), sex(s) { strcpy(name, nam); }
```
<br>
<p>默认构造函数是可以无实参调用的构造函数。</p>
<p>默认参数可以省略形参名，如</p>

```cpp
Box (int = 10, int = 10, int = 10);
```

<br>
<p>静态数据成员(static)只占一份空间，在编译期分配内存。可以在类外初始化，如</p>

```cpp
int Box::height = 10;
```
<p>但不能用参数初始化表对静态成员初始化。</p>
<p>静态数据成员如果是公开的，可以直接通过类名引用。</p>
<br>
<p>成员函数也可以定义为静态的，如</p>

```cpp
static int volume();
```
<p>静态成员函数不能访问本类中的非静态成员。</p>

## 4. 重载
<p>不能重载的运算符有5个: </p>
<p>. * :: sizeof ?:</p>
<p>重载不能改变运算符运算对象的个数，也不能有默认的参数。</p>
<p>重载的运算符必须和用户自定义类型的对象一起使用。</p>
<p>示例：</p>
<p>Complex operator + (Complex c1, Complex c2) { </p>
<p> return (Complex)(c1.real+c2.real, c1.imag + c2.imag) }</p>
<p>也可以在Complex类内重载：</p>
<p>Complex operator + (Complex c2) { </p>
<p> return (Complex)(c.real+c2.real, c.imag + c2.imag) }</p>
<p>赋值运算符=、下标运算符[]、函数调用运算符()、成员运算符->必须作为成员函数。</p>
<p>流插入和流提取运算符、类型转换运算符不能定义为成员函数。</p>

在Cpp中，以下两种类型转换方式都可以使用：  

```cpp
int(9.9);
(int)9.9;
```

前一种写法是“类型转换函数”，可以进行重载。  

## 5. 继承与派生
声明派生类的一般形式为：  

```cpp
class 派生类名:继承方式 基类名
{
    派生类成员声明
};
```

继承方式有三种：public、protected、private。  

不论采取何种方式，都无法访问基类的private成员。采用public方式时，成员访问属性不变，采用private方式时，基类成员在派生类中变为private成员，采用protected方式时，基类成员在派生类中变为protected成员。

派生类构造函数声明：
```cpp
Student1(int n, string nam, char s, int a, string ad):Student(n, nam, s){
    age = a;
    addr = ad;
}
```
或：
```cpp
Student1(int n, string nam, char s, int a, string ad):Student(n, nam, s), age(a), addr(ad){}
```

声明多重继承的方法
```cpp
class D: public A, private B, protected C
```

多重继承派生类的构造函数:
```cpp
Graduate(string name, int a, char s, string t, float sco, float w): Teacher(nam, a, t), Student(nam, s, sco), wage(w) {}
```

虚基类方法：
```cpp
class A {
    ...
};
class B: virtual public A { // A是B的虚基类
    ...
};
class C: virtual public A {
    ...
};
```

虚基类的初始化由派生类完成。

## 6. 多态性与虚函数
多态性分为静态多态性和动态多态性。静态多态性是通过重载实现的，而动态多态性是通过虚函数实现的。

虚函数的声明形式为：
```cpp
virtual 函数类型 函数名(形参表);
```

纯虚函数的声明形式为：
```cpp
virtual 函数类型 函数名(形参表) = 0;
```

## 7. 输入输出
setiosflags(n): 设置小数为n位。
例：
```cpp
cout << setiosflags(ios::fixed) << setprecision(2) << 123.456 << endl;
```
