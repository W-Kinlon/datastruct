//
// Created by Kinlon Wong on 2021/7/24.
//

//第一题
#define maxsize 10010

struct Queue{
    int front,rear;
    int tag;//0:1:2 空 非空非满 满
    int data[maxsize];
};

void init(Queue &q){
    q.front = q.rear = 0;
    q.tag = 0;
}

bool en(Queue &q,int x){
    if(q.tag == 2)
        return false;
    q.rear = (q.rear+1) % maxsize;
    q.data[q.rear] = x;
    if(q.front == q.rear)
        q.tag = 2;
    else
        q.tag = 1;
    return true;
}

bool de(Queue &q,int &x){
    if(q.tag == 0)
        return false;
    x = q.data[q.front];
    q.front = (q.front+1) % maxsize;
    if(q.front == q.rear)
        q.tag = 0;
    else
        q.tag = 1;
    return true;
}
