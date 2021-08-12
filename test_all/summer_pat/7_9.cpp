//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "vector"
#include "cmath"
#include "string"
using namespace std;
int N,K,sum=0;string digits,res;

bool isPrimary(int num){
    if(num==1) return false;
//    if(num==0 ||num==1 ||num==2) return true;
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}



bool is404(){
    for(int i=0;i<=digits.size()-K;i++){
        for(int j=i+K-1;j>=i;j--)
            sum += pow(10,K-(j-i+1))*(digits[j] - '0');
        if(isPrimary(sum)) {
            res = to_string(sum);
            if(res.size() < K){
                auto size = res.size();res.clear();
                for(int k=0;k<K-size;k++) res.push_back('0');
                for(int k=0;k<to_string(sum).size();k++) res.push_back(to_string(sum)[k]);
            }
            return false;
        }
        else{sum = 0;continue;}
    }
    return true;
}

int main(){
    cin >>N>>K>>digits;
    if(is404())
        cout << "404";
    else cout << res;
    return 0;
}