# 我自己的练习作业

## 练习9.1
* (a) 单词数量是固定的，但是需要排序操作，为了最小化排序时的插入元素所带来的额外开销，在此建议使用`list`或者`forward_list`。
* (b) 因为仅仅在头尾进行插入和删除的操作，所以应该选择`deque`容器。
* (c) 该操作分为两个部分：
1. 从文件中将未知数量的整数读取进来
2. 排序时进行的读取和插入操作
3. 总体来看，读取操作更多，使用'vector'可能是更好的选择。

## 练习9.2
```cpp
std::list<std::deque<int>> mylist;
```

## 练习9.3
两个迭代器`begin`和`end`需要满足以下条件
- 它们指向同一个容器中的元素，或者是容器最后一个元素之后的位置。
- 我们可以通过反复递增`begin`来到达`end`。或句话说，`end`不应该在`begin`之前。

## 练习9.4
[源代码](https://github.com/fsZhuangB/Cpp_Primer_Answers/blob/master/ch09/exercise9_4_fs.cpp) 

## 练习9.5
```cpp
int find(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val)
{
    while (begin != end)
    {
        if (*begin == val)
        {
            return val;
            break;
        }
        begin++;    
    }
    return false;
}
```

## 练习9.6

`while (iter1 < iter2)` 这句话有错误，迭代器拥有迭代器范围，应该改成`while (iter1 != iter2)`

## 练习9.7
```cpp
vector<int>::size_type;
```

## 练习9.8
```cpp
list<string> const_iterator;  // 读
list<string> iterator;        // 写
```