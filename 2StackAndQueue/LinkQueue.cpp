//
// Created by 11545 on 2021/5/20.
//
#include "iostream"

struct LNode{
    int data;
    LNode *next;
};

typedef struct LQueue{
    LNode *front,*rear;
};

//带头结点
void InitQueue(LQueue &q){
    q.front = q.rear = (LNode *)(malloc(sizeof(LNode)));
    q.front->next = NULL;
}
//队尾rear不放元素

bool QueueEmpty(LQueue q){
    if(q.front==q.rear)
        return true;
    return false;
}


bool EnQueue(LQueue &q, int x){
    LNode *s = (LNode*) malloc(sizeof (LNode *));
    s->data = x;
    s->next =NULL;
    q.rear->next = s;
    q.rear = s;
}

bool DeQueue(LQueue &q, int &x){
    if(QueueEmpty(q))
        return false;
    LNode *p = q.front->next;
    x = p->data;
    q.front->next = p->next;
    //当x为唯一节点
    if(q.rear == p)
        q.rear = q.front;
    free(p);
    return true;
}