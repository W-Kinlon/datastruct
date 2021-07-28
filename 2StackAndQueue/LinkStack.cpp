//
// Created by 11545 on 2021/5/19.
//

typedef struct LStackNode{
    int data;
    LStackNode *next;
} *LinkStack;

bool Push(LinkStack s,int e){
    LStackNode *p;
    p->data = e;
    p->next = s;
    s->next = p;
    return true;
}

bool Pop(LinkStack &s,int &x){
    x = s->data;
    s = s->next;
    return true;
}

bool GetTop(LinkStack s,int &x){
    x = s->data;
    return true;
}
