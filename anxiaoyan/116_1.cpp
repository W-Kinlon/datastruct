//
// Created by Kinlon Wong on 2021/8/16.
//
#include "iostream"

//二叉链表
typedef struct Node{
    int num;
    struct Node *lchild,*rchild;
} *Tree;

//找到度为2的节点
int FindDegreeEqual2(Tree t){
    //t为空节点、叶子结点
    if(!t || (!t->lchild && !t->rchild))
        return 0;
    else
        return 1 + FindDegreeEqual2(t->rchild) + FindDegreeEqual2(t->lchild);
}

int main(){
    Tree tree;
    Tree t,a,b,c,d,s,e,f,g;
    t = (Tree) malloc(sizeof (Tree));
    a = (Tree) malloc(sizeof (Tree));
    b = (Tree) malloc(sizeof (Tree));
    tree = (Tree) malloc(sizeof (Tree));
    c = (Tree) malloc(sizeof (Tree));
    d = (Tree) malloc(sizeof (Tree));
    s = (Tree) malloc(sizeof (Tree));
//    t->num=a->num=b->num=c->num=d->num=s->num=e->num=f->num=g->num=6;
    t->lchild=a;
    t->rchild=b;
    a->lchild=c;
    a->rchild=d;
    b->lchild=s;
    tree->lchild=t;
    std::cout<<FindDegreeEqual2(t);
}