<!-- title: 数据结构 -->
<meta name="viewport" content="width=device-width" initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0, user-scalable="no">

# 数据结构

- [数据结构](#数据结构)
  - [绪论](#绪论)
    - [1.2 基本概念和术语](#12-基本概念和术语)
  - [线性表](#线性表)
    - [线性表的顺序表示和实现](#线性表的顺序表示和实现)
  - [栈](#栈)
  - [队列](#队列)
    - [循环队列](#循环队列)
  - [串](#串)



> 胡健 办公室瀚学1111  
> 期末80% 出勤、随堂10% 作业10%

## 绪论

### 1.2 基本概念和术语
数据 (data) 是对客观事物的符号表示。  
数据元素 (data element) 是数据的基本单位。  
数据对象 (data object) 是性质相同的数据元素的集合，是数据的一个子集。  
数据结构 (data structure) 是相互之间存在一种或多种特定关系的数据元素的集合。  

根据数据元素之间的关系，通常有下列4类基本结构：集合、线性结构、树形结构、图状结构。

数据结构的形式定义为：数据结构是一个二元组  
　　　　Data_Structure = (D, S)  
其中，D 是数据元素的有限集，S 是 D 上关系的有限集。

## 线性表
### 线性表的顺序表示和实现
顺序存储：逻辑上相邻，物理上也相邻。  
顺序表的类型定义：
```c
#define MAXLEN 100
typedef struct
{
    ElemType* elem;
    int length;
} SqList;
```

## 栈

Stack in STL:
```cpp
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    s.push(1);
    cout << s.top();
    s.pop();
    return 0;
}
```

数制转换：
```c
typedef struct {
    int *base;
    int *top;
    int stacksize;
} SqStack;
Status InitStack(SqStack &S) {
    S.base = (int*)malloc(STACK_INIT_SIZE * sizeof(int));
    if(!S.base) exit(OVERFLOW);
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}
void conversion() {
    InitStack(S);
    scanf("%d", &N);
    while(N) {
        Push(S, N % 8);
        N = N / 8;
    }
    while(!StackEmpty(S)) {
        Pop(S, e);
        printf("%d", e);
    }
}
```

## 队列

### 循环队列
循环队列入队：
```cpp
Status EnQueue(SqQueue &Q, QElemType e) {
    if ((Q.rear + 1) % MAXSIZE == Q.front) {
        return ERROR;
    }
}
```

```cpp
Status DeQueue (SqQueue &Q, QElemType &e) {
    if (Q.front == Q.rear) return ERROR;
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    return OK;
}
```

链队列：
```c
typedef struct QNode {
    QElemType data;
    struct QNode *next;
} QNode, *QueuePtr;
typedef struct {
    QueuePtr front;
    QueuePtr rear;
} LinkQueue;

Status InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (QNode*)malloc(sizeof(QNode));
    if (!Q.front) exit(OVERFLOW);
    Q.front->next = NULL;
    return OK;
}

Status DestroyQueue(LinkQueue & Q) {
    while (Q.front) {
        Q.rear = Q.front->next;
        free(Q.front);
        Q.front = Q.rear;
    }
    return OK;
}

Status EnQueue(LinkQueue&Q, QElemType e) {
    p = (QNode*)malloc(sizeof(QNode));
    if (!p) exit(OVERFLOW);
    p->data = e;
}
```

## 串
串的顺序存储结构：
```c
typedef struct {
    char *ch;
    int length;
} HString;
```
