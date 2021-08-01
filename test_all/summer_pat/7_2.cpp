//
// Created by Kinlon Wong on 2021/7/29.
//

#include "iostream"
#include "cmath"
#include "vector"
using namespace std;

bool prime(long int num){
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
    int factor=1,number,answer[8192]={0},flag=0,i;
    cin >> number;
    printf("%d=",number);
    if(number<2)printf("%d",number);
    while(number>1)
        if(prime(++factor))
            while(number%factor==0){
                number/=factor;
                answer[factor]++;
            }
    for(i=2;i<8192;i++)
        if(answer[i]){
            if(flag)printf("*");
            flag=1;
            printf("%d",i);
            if(answer[i]>1)printf("^%d",answer[i]);
        }
    return 0;
}