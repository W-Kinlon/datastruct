//
// Created by Kinlon Wong on 2021/8/1.
//
#include "iostream"
typedef int elemType;

typedef struct SSTable{
    elemType *elem;
    int length;
};


//顺序查找
int Search_Seq(SSTable ST,elemType key){
    ST.elem[0] = key;
    int i;
    for (i = ST.length;ST.elem[i] != key; --i);
    return i;
}

//折半查找
int Binary_Search(SSTable table,elemType key){
    int low=0,high=table.length-1,mid;
    while (low<=high){
        mid = (low+high) / 2;
        if(table.elem[mid] == key) return mid;//查找成功
        else if(table.elem[mid] > key) high=mid-1;//从前半部分查找
        else low=mid+1;//从后半部分查找
    }
    return -1;
}


int main(){
    int list[] = {-1,1,2,3,4,5,6,7,8,9,10},length=10;
    SSTable table;table.elem = list;table.length = length+1;
    std::cout << Search_Seq(table,88);
    return 0;
}