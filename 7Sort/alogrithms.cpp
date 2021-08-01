//
// Created by Kinlon Wong on 2021/7/27.
//
#include "iostream"
using namespace std;

//输出数组
void outPrint(int *list,int length){
    //输出
    for(int i=0;i<length-1;i++){
        cout << list[i] << ',';
    }
    cout << list[length-1];
}

//交换元素
void elem_swap(int &a,int &b){
    auto temp = a;
    a = b;
    b = temp;
}

//插入排序
void insert_sort(int list[],int length){
    auto start = clock();        /*  开始计时  */
    int temp_length=1;//暂存已经排序的记录
    for(int i=1;i<length;i++){
        auto origin_item = list[i];
        for(int j=0;j<temp_length;j++){
            auto have_sort_item = list[j];
            //排序顺序
            if(origin_item > have_sort_item){
                if(j==temp_length-1)
                    list[temp_length] = origin_item;
                else continue;
            }
            else{
                for(int k=temp_length;k>j;k--){
                    list[k] = list[k-1];
                }
                list[j] = origin_item;
                break;
            }
        }
        temp_length++;
    }
    cout << "插入排序：";
    outPrint(list,length);
    auto stop = clock();
    cout << "   运行时间:" << ((double)(stop - start)) / CLK_TCK;
    cout << '\n';
}

//冒泡排序
void bubble_sort(int *list,int length){
    auto start = clock();        /*  开始计时  */
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            //排序顺序 >:递减   <:递增
            if(list[j] < list[i])
                elem_swap(list[i],list[j]);
        }
    }
    cout << "冒泡排序：";
    outPrint(list,length);
    auto stop = clock();
    cout << "   运行时间:" << ((double)(stop - start)) / CLK_TCK;
    cout << '\n';
}

//希尔排序
void shell_sort(int *list,int length){
    int d = (int) length / 2;
    while (d > 1){
        for(int i=0;i<length-d;i+=1){
            if(list[i+d] < list[i])
                elem_swap(list[i],list[i+d]);
        }
        d /= 2;
    }
    cout << "希尔排序：";
    outPrint(list,length);
    cout << '\n';
}


int main(){
    int _list[] = {4,17,7,4,2,9,45,1,13,34,24,15,44,65,24,645,24,735,76,29,99};
    auto length = int(sizeof(_list)/sizeof (*_list));
    cout << "原数组：";
    outPrint(_list,length);
    cout << '\n';

//    insert_sort(_list,length);
    bubble_sort(_list,length);
//    shell_sort(_list,length);

    outPrint(_list,length);

}
