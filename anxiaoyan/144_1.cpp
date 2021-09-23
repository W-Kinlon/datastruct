//
// Created by Kinlon Wong on 2021/8/31.
//

#include "iostream"
using namespace std;

typedef struct Node{
    int data;
    Node *next;
} *LinkedList;

void detail(LinkedList &LA,LinkedList &LB){
    for(Node *item=LA;item->next;item=item->next){
        if(item->next->data%2 == 0){
            Node *p = LB;
            while (p->next) p=p->next;
            p->next = item->next;
            if(item->next->next) item=item->next->next;
        }
    }
}

int main(){
    LinkedList linkList,LB;
    Node *b,*c;
    linkList = (Node *) malloc(sizeof (Node));
    LB = (Node *) malloc(sizeof (Node));
    b = (Node *) malloc(sizeof (Node));
    c = (Node *) malloc(sizeof (Node));
    linkList->data = 2;
    linkList->next = b;
    b->data = 2;
    b->next = c;
    c->data = 5;

//    for(Node *i=linkList;i;i=i->next)
//        cout << i->data;


    detail(linkList,LB);

    for(Node *i=LB->next;i;i=i->next)
        cout << i->data;

    return 0;
}