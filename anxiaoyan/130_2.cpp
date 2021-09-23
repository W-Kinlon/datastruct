//
// Created by Kinlon Wong on 2021/8/28.
//

#include "iostream"
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
} *LinkList;

void deleteSample(LinkList l){
    for(Node *i=l;i->next;i=i->next)
        if(i->data == i->next->data) i->next = i->next->next;
}


int main(){
    LinkList linkList;
    Node *b,*c;
    linkList = (Node *) malloc(sizeof (Node));
    b = (Node *) malloc(sizeof (Node));
    c = (Node *) malloc(sizeof (Node));
    linkList->data = 2;
    linkList->next = b;
    b->data = 2;
    b->next = c;
    c->data = 4;

    deleteSample(linkList);

    for(Node *i=linkList;i;i=i->next)
        cout << i->data;


    return 0;
}