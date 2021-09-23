//
// Created by 11545 on 2021/5/17.
//

#include "iostream"
#define InitSize 10

struct SeqList{
    int *data;
    int Maxsize;
    int Length;
};

void InitList(SeqList &L){
//    malloc分配内存
    L.data = (int *)malloc(InitSize*sizeof (int));
    L.Length = 0;
    L.Maxsize = InitSize;
}

int GetElem(SeqList L,int i){
    return L.data[i-1];
}

bool operator ==(SeqList l1,SeqList l2){
    if (l1.data == l2.data && l1.Length==l2.Length && l1.Maxsize==l2.Maxsize)
        return true;
    else
        return false;
}

//增加内存
void IncreaseSize(SeqList &L,int len){
    int *p = L.data;
    L.data = (int*)malloc((L.Maxsize+len)* sizeof(int));
//    将数据复制到新区域
    for(int i=0;i<L.Length;i++)
        L.data[i] = p[i];
    L.Maxsize += len;
    //释放临时内存
//    free(p);
}
bool InsertList(SeqList &L,int i,int e){
    if(L.Length>=L.Maxsize)
        return false;
    if(1<=i && i<=L.Length+1) {

        for (int j = L.Length; j >= i; j--)
            L.data[j] = L.data[j - 1];
        L.data[i-1] = e;
        L.Length++;
        return true;
    } else
        return false;
}

//头插
bool head_InsertList(SeqList &L,int e){
    if(L.Length+1>L.Maxsize)
        return false;
    else{
        int *p = L.data;
        L.data[0] = e;
        for(int i=1;i<L.Length;i++)
            L.data[i] = p[i-1];
//        free(p);
        L.Length += 1;
        return true;
    }
}


//尾插
bool tail_InsertList(SeqList &L,int e){
    if(L.Length+1>L.Maxsize)
        return false;
    else{
        L.data[L.Length] = e;
        L.Length += 1;
        return true;
    }
}

void PrintList(SeqList L){
    for(int i=0;i<L.Length;i++)
        std::cout << L.data[i] << ' ';
}

int main(){
    SeqList L;
    InitList(L);
    tail_InsertList(L,3);
    tail_InsertList(L,4);
    tail_InsertList(L,5);
    tail_InsertList(L,6);
    head_InsertList(L,2);
    head_InsertList(L,1);
//    IncreaseSize(L,5);
    PrintList(L);
    return 0;
}