//
// Created by 11545 on 2021/5/19.
//

#define MAxsize 10

typedef struct ShereStack{
    int data[MAxsize];
    int top;
};

void InitStack(ShereStack &s){
    s.top = -1;
}

void DestoryStack(ShereStack &s){
    s.top = -1;
}

bool Push(ShereStack &s, int e){
    if(s.top == MAxsize-1)
        return false;
    s.data[++s.top] = e;
    return true;
}

bool Pop(ShereStack s, int &x){
    if(s.top==-1)
        return false;
    x = s.data[s.top--];
    return true;
}

bool GetTop(ShereStack s, int &x){
    if(s.top==-1)
        return false;
    x = s.data[s.top];
    return true;
}