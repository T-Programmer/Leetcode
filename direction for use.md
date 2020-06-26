# c++中的stl容器和常见函数的使用

## 1.map
map是一个STL的关联容器，提供一对一的hash
- 第一个被称为关键字（key），每个关键字在map中只能出现一次
- 第二个被称为该关键字的值（value）

#### 插入元素
```
// 声明一个map对象
map<int,int> hash;

// 第一种 用insert函数插入pair
hash.insert(pair<int, int>(100,11));

// 第二种 用insert函数插入value_type数据
hash.insert(map<int,int>::value_type(100,11));

// 第三种 用“array”的方式插入
hash[100] = 11;
```
在插入元素的前两种方法是一致的，在数据的插入上涉及集合的唯一性的概念，当map中有这个关键字时，**insert操作是不能再插入数据**，而用数据的方式就不同了，它可以覆盖之前关键字对应的值。


#### 查找元素
当所查找的key出现时，它返回数据所在对象的位置，如果没有，返回iter与end函数的值相同

```
// find函数返回迭代器指向当前查找元素的位置，否则返回map::end()位置
iter = hash.find(100);

if(iter != hash.end()){
    cout<< "Find , the value is "<< iter->second << endl;
}else{
    cout<< "Do not find" <<endl;
}
```

#### 删除和清空元素
```
// 迭代器删除
iter = hash.find(100);
hash.erase(iter);

// 用关键字删除
int n = hash.erase(100);//如果删除了返回1，否则返回0

// 使用迭代器范围删除：把整个map清空
hash.erase(hash.begin(),hash.end());
// 等同于hash.clear()
```

#### sort函数
头文件：#include<algorithm>
sort函数的的模板有三个参数：
void sort(RandomAccessIterator first,RandomAccessIterator last,Compare comp)
1. 第一个参数：起始地址
2. 第二个参数：结束地址
3. 第三个参数：排序方法，可以是降序也可以是升序，也可以自定义排序方法



