//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "string"
using namespace std;
string number,res;
int s;

char detail(int &start,int end){
    int _min=0x3f3f3f;
    for(int i=start;i<=end;i++) {
        int n = number[i] - '0';
        if (n < _min) {
            _min = n;
            start = i;
        }
    }
    return _min+'0';
}

int main(){
    cin>>number>>s;
    auto size = number.size();
    int times = size-s,start=0,end=s;

    while (res.size()<times){
        res.push_back(detail(start,end));
        start++;end++;
    }
    cout << res;

    return 0;
}