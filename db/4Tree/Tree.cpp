//
// Created by Kinlon Wong on 2021/6/11.
//
#include "vector"
using namespace std;

#define MaxSize 100
#define inf 0x3f3f3f

//顺序存储
typedef struct TreeNode{
    int value;
    bool isEmpty,visited;
};

TreeNode t[MaxSize];

//链式存储
typedef struct BiTree{
    int data;
    bool isEmpty,visited;
    BiTree *left_child,*right_child;
    BiTree *parent;//父指针
}BitNode,*BitTree;


//访问
vector<int> list;
void visit(BitNode n){
    n.visited = true;
    list.push_back(n.data);
}

//旖旎
//中序遍历
void PreOrder(BiTree &t){
    //当数据存在时
    if(t.data != inf){
        visit(t);
        PreOrder(*t.left_child);
        PreOrder(*t.right_child);
    }
}

//后序遍历
void InOrder(BiTree &t){
    if(t.left_child != NULL){
        InOrder(*t.left_child);
    } else{
        visit(*t.left_child);
        InOrder(*t.right_child);
        InOrder(t);
    }
}

//线索二叉树
typedef struct ThreadNode{
    int data;
    ThreadNode *left_child,*right_child;
    int lTag,rTag;//左右线索标志位
};

//以p为根结点的子树中，最后一个被中序遍历的结点
ThreadNode *last_node(ThreadNode *p){
//    循环到右下结点
    while (p->rTag == 0)
        p = p->right_child;
    return p;
}

//中序遍历中 p的前驱
ThreadNode *pre_node(ThreadNode *p){
    if(p->lTag == 0)
        return last_node(p->left_child);
    return p->left_child;
}
