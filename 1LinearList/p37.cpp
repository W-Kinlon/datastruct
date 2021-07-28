//
// Created by Kinlon Wong on 2021/7/21.
//
#include "LinkList.cpp"
#include "vector"

//1递归算法 删除不带头节点单链表所有的x
void Delete_X(LinkList &L,int x){
    LNode *p;
    if(L==NULL)return;
    if(L->data == x){
        p = L;
        L = L->next;
        Delete_X(L,x);
    } else{
        Delete_X(L->next,x);
    }
}

//带头节点单链表 L 删除所有x 并释放空间 假设x节点不唯一
void Delete_all_X(LinkList &L,int x){
    LNode *pre = L;
    for(auto p = L->next;p != NULL;p = p->next){
        if(p->data == x){
            free(p);
            pre->next = p->next;
        } else
        pre = p;
    }
}

//设L为带头节点的单链表 编写反向输出节点值
void Print_reverse_List(LinkList L){
    vector<int> puts;
    for(auto p = L->next;p != NULL;p = p->next)
        puts.push_back(p->data);
    for(int i=puts.size();i>-1;i++)
        cout << puts[i];
}