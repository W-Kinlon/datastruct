//
// Created by 11545 on 2021/4/15.
//

/* STL 标准库类型
 * list 双向链表
 * vector 容器
 * deque 双端队列
 * stack 栈
 * queue 队列
 * map  建立key-value映射
 *
 * STL 标准库常用操作
 * assign()           赋值
   empty()            容器为空则返回非0值
   erase()            删除指定位置或指定范围内的元素
   push_front()       从容器头部插入元素
   push_back()        从容器尾部插入元素
   pop_front()        删除第一个元素
   pop_back()         删除最后一个元素
   back()             返回最后一个元素的引用
   front()            返回第一个元素的引用
   begin()            返回指向第一个元素的游标 (与迭代器配合使用)
   end()              返回指向最后一个元素的后一个位置的游标 (最后1个元素再加1) (与迭代器配合使用)
 *
 * */


#include "vector"
#include "list"
#include "queue"
#include "iostream"

using namespace std;



int main(){


    vector <int> a;
    list<int> myList;
    queue<int> myQueue;

    cout << myList.size() << endl;

    myQueue.push(33);
    myQueue.push(55);
    cout << myQueue.front() << endl;


    a.resize(10,-1);
    a.push_back(11);


    cout << "size:" << a.size() << endl << endl;


    //迭代器1
    vector<int>::iterator begin = a.begin();
    auto end = a.end();
    cout << "iterator";
    while (begin != end){

        cout << *begin << ' ';
        ++begin;
    }
    cout << endl;



    //迭代器2
    cout << "for";
    for(int i=0;i<a.size();i++){
        cout << a[i] << ' ';
    }
    cout << endl;



    return 0;
}