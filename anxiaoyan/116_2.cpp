//
// Created by Kinlon Wong on 2021/8/17.
//
#include "iostream"
using namespace std;

typedef struct Node{
    struct Node *next;
    int num;
} *LinkList;

void merge(LinkList &l1,LinkList l2){
    for(auto l2_item=l2->next; l2_item; l2_item=l2_item->next) {
        auto l2_num = l2_item->num;
        bool isSmall = false;
        //前插
        if(l2_num < l1->next->num){
            l2_item->next = l1->next;
            l1->next = l2_item;
            isSmall = true;3
        }
        for (auto l1_item = l1->next;!isSmall && l1_item; l1_item = l1_item->next) {
            auto l1_num = l1_item->num;
            //后插
            if(!l1_item->next || (l1_num < l2_num && l2_num < l1_item->next->num)){
                l2_item->next = l1_item->next;
                l1_item->next = l2_item;
                break;
            }
            if(l1_num == l2_num) break;
        }
    }
}

bool SubSet(LinkList &l1,LinkList l2){
    auto p = l1;
    while (p){
        bool found = false;
        auto q=l2;
        while (q && !found){
            if(q->num == p->num)
                found = true;
            else q=q->next;
            if(!found)
                return false;
            else p=p->next;
        }
    }
    return true;
}


int main(){
    LinkList head,list,a,s,d,f,g,h;
    head = (LinkList) malloc(sizeof (LinkList));
    a->num=1;

}