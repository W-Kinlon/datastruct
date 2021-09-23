//
// Created by 11545 on 2021/5/17.
//

#include "iostream"
using namespace std;

typedef struct DNode{
    int data;
    DNode *prior,*next;
}* DLinkList;

bool InitDLinkList(DLinkList &L){
    L = (DNode*) malloc(sizeof(DNode));
    if(L==NULL)return false;
    L->prior = NULL;
    L->next = NULL;
    return true;
}

//在p后面插s
bool InsertNextNode(DNode *p,DNode *s){
    if(p==NULL || s==NULL)
        return false;
    s->next = p->next;
    if(p->next!=NULL)p->next->prior = s;
    p->next = s;
    s->prior = p;
    return true;
}

//删除p结点后继节点
bool DeleteNextDNode(DNode *p){
    if(p==NULL || p->next==NULL)return false;
    auto q = p->next;
    p->next = q->next;
    p->next->prior = p;
    return true ;
}


int main(){}