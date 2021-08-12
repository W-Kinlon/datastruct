//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "vector"
using namespace std;
int N,n,M;
vector<int> res;

void MySwap(int &a,int &b){
    auto temp = b;
    b = a;
    a = temp;
}

void sort(vector<int> &list){
    for(int i=0;i<list.size()-1;i++){
        for(int j=i+1;j<list.size();j++){
            //排序顺序 >:递减   <:递增
            if(list[j] < list[i])
                MySwap(list[i],list[j]);
        }
    }
}

int main(){
    cin >>N>>M;n=N;
    while (N--){
        int tea_score=0,stu_score=0;vector<int> list_stu_score;
        for(int i=0;i<n;i++){
            int score;cin >> score;
            if(i==0)
                tea_score=score;
            else
                if(score<=M&&score>=0)
                    list_stu_score.push_back(score);
        }
        sort(list_stu_score);
        for(int i=1;i<list_stu_score.size()-1;i++) stu_score+=list_stu_score[i];

        res.push_back(
                int (
                (tea_score +stu_score/(list_stu_score.size()-2)) / 2 +
                1/2
                ));
        list_stu_score.clear();
    }
    for(int i=0;i<res.size();i++) cout << res[i] <<'\n';


    return 0;
}