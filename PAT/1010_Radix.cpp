//
// Created by 11545 on 2021/4/22.
//
#include "iostream"
#include "string"
#include "cmath"
using namespace std;

int getCharNum(char s){
    int ascii = (int)s;
    if(ascii>=87)
        return ascii-87;
    else
        return ascii-48;
}

int getMinRadix(string str){
    int size = str.length();
    int res = 0;
    for(size_t i=size-1;i>-1;i--){
        res = max(getCharNum(str[i])+1,res);
    }
    return res;
}

long long int getNum(string str, long long int radix){
    int size = str.length();
    long long int sum = 0;
    int ex = 0;
    for(size_t i=size-1;i>-1;i--){
        sum += (int)pow(radix,ex)*getCharNum(str[i]);
        ex++;
    }
    return sum;
}

long long int getRadix(long long int num1,string str,long long int start,long long int end){
    if(start==end){
        if(getNum(str,start)==num1)return start;
        else return 0;
    }
    else if(start<end){
        long long int radix=(start+end)/2;
        if(getNum(str,radix)==num1)return radix;
        else if(getNum(str,radix)>num1||getNum(str,radix)<0)return getRadix(num1,str,start,radix);
        else return getRadix(num1,str,radix+1,end);
    }
    return 0;
}

int main(){
    string strN1,strN2;
    long long int N,tag,radix,minOtherRadix,maxOtherRadix,otherRadix;
    cin >> strN1 >> strN2 >> tag >> radix;
    if(tag==1){
        N = getNum(strN1, radix);
        minOtherRadix = getMinRadix(strN2);
        maxOtherRadix = N+1;
        otherRadix = getRadix(N,strN2,minOtherRadix,maxOtherRadix);
    } else{
        N = getNum(strN2, radix);
        minOtherRadix = getMinRadix(strN1);
        maxOtherRadix = N+1;
        otherRadix = getRadix(N,strN1,minOtherRadix,maxOtherRadix);
    }
    if(otherRadix != 0){
        cout << otherRadix;
    } else{
        cout << "Impossible";
    }
    return 0;
}