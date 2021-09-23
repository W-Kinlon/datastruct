//
// Created by Kinlon Wong on 2021/7/22.
//


//4判断中心对称单链表
#define max 10010
typedef struct LNode{
    char data;
    LNode *next;
}*LinkList;
//递归函数
bool digui(char *str,int start,int end){
    if(start+1==end){
        return true;
    }
    else if(str[start]!=str[end])
        return false;
    return digui(str,start+1,end-1);
}
bool is_central(LinkList l){
    auto head = l;
    int i=0;
    char str[max];
    while (head->next){
        str[i] = head->data;
        head = head->next;
    }
    return digui(str,0,i-1);
}













//5共享栈 
#define oo 0
#define maxsize 0x3f3f3f
//定义结构体
struct ShereStack{
    int s1_top,s2_top;
    int data[maxsize];
};
//初始化s1 s2
void Init_S1_S2(ShereStack &s){
    s.s1_top = oo;
    s.s2_top = maxsize - 1;
}

//判断栈满
bool isFull(ShereStack s){
    if(s.s2_top - s.s1_top == 1)
        return true;
    return false;
}

//push_s1
bool push_s1(ShereStack &s, int x){
    if(!isFull(s)){
        s.data[++s.s1_top] = x;
        return true;
    }
    return false;
}

//push_s2
bool push_s2(ShereStack s, int x){
    if(!isFull(s)){
        s.data[--s.s2_top] = x;
        return true;
    }
    return false;
}