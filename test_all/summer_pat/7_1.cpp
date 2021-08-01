//
// Created by Kinlon Wong on 2021/7/29.
//
#include "iostream"
using namespace std;

int main(){
    int N,sum=0,question=0,answer=0;
    cin >> N;
    while (N>0){
        sum += 60;//每天长
        int a,b;
        cin >> a>>b;
        sum -= a*20;question+=a;answer+=b;

        if(question<=answer) sum -= 30;
        else if((float )answer/(float )question < 0.5) sum -= 70;
        N--;
    }
    if(sum>0)cout<<'+'<<sum;
    else if(sum<0)cout<<sum;
    else if(sum==0) cout<<"--";
    return 0;
}