//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "vector"
using namespace std;
int N;
int n,i,j;
bool isFirst= true;
vector<int> nums;

void invert(){
    vector<int> temp;
    for(int k=j-1;k>=i-1;k--) temp.push_back(nums[k]);
    for(int k=0;k<temp.size();k++) nums[k+i-1]=temp[k];
}

int main(){
    cin>>N;
    while (N--){
        nums.clear();
        cin >>n>>i>>j;
        while (n--){
            int a;
            cin>>a;
            nums.push_back(a);
        }

        invert();
//        if(isFirst) isFirst= false;
//        else cout << '\n';
        for(int k=0;k<nums.size()-1;k++) cout<<nums[k]<<' ';
        cout<<nums[nums.size()-1]<< '\n';
    }
    return 0;
}