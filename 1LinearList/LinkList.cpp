//
// Created by 11545 on 2021/5/17.
//

#include "iostream"
using namespace std;

typedef struct LNode{
    int data;
    LNode *next;
}LNode,*LinkList;

LNode * GetElem(LinkList L,int i){

}


//头插法建立单链表
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    //分配新结点内存
    L = (LNode *) malloc(sizeof (LNode *));
    L->next = NULL;

}


int main(){
    
}