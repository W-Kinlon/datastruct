//
// Created by Kinlon Wong on 2021/7/22.
//

#include "iostream"
#define maxsize 10010
typedef int ElemType;


typedef struct QNode{
    int rear,front;
    ElemType data[];
}QNode, *CircleQueue;

//初始化
void InitQueue(CircleQueue &Q){
    Q->rear = Q->front = 0;
}

//判满
bool isFull(CircleQueue Q){
    return (Q->rear + 1) % maxsize == Q->front;
}

//判空
bool isEmpty(CircleQueue Q){
    return Q->front == Q->rear;
}

//求队长
int getLength(CircleQueue Q){
    return (Q->rear - Q->front + maxsize) % maxsize;
}

//入队
bool EnQueue(CircleQueue &Q,ElemType x){
    if(isFull(Q))
        return false;
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear+1)%maxsize;
    return true;
}

//出队
bool DeQueue(CircleQueue &Q,ElemType &x){
    if(isEmpty(Q))
        return false;
    x = Q->data[Q->front];
    Q->front = (Q->front + 1) % maxsize;
    return true;
}