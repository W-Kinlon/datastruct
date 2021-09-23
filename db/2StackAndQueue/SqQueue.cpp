//
// Created by 11545 on 2021/5/19.
//

#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int front,rear;
} LQueue;

void InitQueue(LQueue &q){
    q.front = q.rear = 0;
}
//队尾rear不放元素

bool QueueEmpty(LQueue q){
    if(q.rear==q.front)
        return true;
    return false;
}

bool QueueFull(LQueue q){
    if((q.rear+1)%MaxSize)
        return true;
    return false;
}

//循环队列取余
bool EnQueue(LQueue &q, int x){
    if(QueueFull(q))
        return false;
    q.data[q.rear] = x;
    q.rear = (q.rear+1)%MaxSize;
    return true;
}

bool DeQueue(LQueue &q, int &x){
    if(QueueEmpty(q))
        return false;
    x = q.data[q.front];
    q.front = (q.front+1)%MaxSize;
    return true;
}

bool GetHead(LQueue &q, int &x){
    if(QueueEmpty(q))
        return false;
    x = q.data[q.front];
    return true;
}

int Size(LQueue q){
    return (q.rear+MaxSize-q.front)%MaxSize;
}