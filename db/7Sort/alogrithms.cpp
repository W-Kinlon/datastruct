//
// Created by Kinlon Wong on 2021/7/27.
//
#include "iostream"
#include "vector"
using namespace std;
vector<int> temp_list;

//输出数组
void outPrint(int *list,int length){
    temp_list.resize(length,-214);
    //输出
    for(int i=0;i<length-1;i++){
        cout << list[i] << ',';
        temp_list[i] = list[i];
    }
    cout << list[length-1];
    cout << '\n';
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


//归并排序
void Merge(int A[],int low,int mid,int high){
//    int *B = (int*) malloc((high-low+1)*sizeof (int));
//    int i=low,j=mid+1,k;
//    for(k=0;k<high-low+1;k++){
//        if(A[i] <= A[j]) B[k]=A[i++];
//        else B[k]=A[j++];
//    }
//    for(k=0;k<high-low+1;k++)
//        A[low+k] = B[k];

    int i,j,k;
    int *B = (int *) malloc((high-low+1)* sizeof(int));
    for(k=low;k<=high;k++) B[k]=A[k];
    for(i=low,j=mid+1,k=i;i<=mid&&j<=high;k++){
        if(B[i] < B[j]) A[k] = B[i++];
        else A[k] = B[j++];
    }
    while (i<=mid) A[k++] = B[i++];
    while (j<=high) A[k++] = B[j++];
    cout << "新数组：";
    outPrint(A,21);
}
void Merger(int A[],int low,int high){
    if(low < high){
        int mid = (high+low)/2;
        Merger(A,low,mid);
        Merger(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}
void merge_sort(int A[],int length){
    Merger(A,0,length-1);
}


//快速排序
int partition(int A[],int low,int high){
    auto pivot = A[low];
    while (low < high){
        while (low<high && A[high]>=pivot) --high;
        A[low] = A[high];
        while (low<high && A[low]<=pivot) ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}
void quick_sort_impl(int A[],int low,int high){
    if(low < high){
        int pivotpos = partition(A,low,high);
        quick_sort_impl(A,low,pivotpos-1);
        quick_sort_impl(A,pivotpos+1,high);
    }
}
void quick_sort(int A[],int length){
    quick_sort_impl(A,0,length-1);
}

int main(){
    int _list[] = {4,17,7,4,2,9,45,1,13,34,24,15,44,65,24,645,24,735,76,29,99};
    auto length = int(sizeof(_list)/sizeof (*_list));
    cout << "原数组：";
    outPrint(_list,length);

//    insert_sort(_list,length);
//    bubble_sort(_list,length);
//    shell_sort(_list,length);
//    merge_sort(_list,length);
    quick_sort(_list,length);

    cout << "新数组：";
    outPrint(_list,length);

}
