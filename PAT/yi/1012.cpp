//
// Created by Kinlon Wong on 2021/7/20.
//

#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int i;
}Node,*NNode;

void change(NNode &x,NNode &y){
    x->i=3;
    y->i=4;
}

int main()
{
    Node *x;
    Node *y;
    x=(NNode)malloc(sizeof(NNode));
    y=(NNode)malloc(sizeof(NNode));
    x->i=1;
    y->i=2;
    change(x,y);
    printf("%d %d",x->i,y->i);
    return 0;
}