<!-- title: 数据结构 -->
<meta name="viewport" content="width=device-width" initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0, user-scalable="no">

# 数据结构
- 胡健 办公室瀚学1111
- 期末80% 出勤、随堂10% 作业10%
# 绪论

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


