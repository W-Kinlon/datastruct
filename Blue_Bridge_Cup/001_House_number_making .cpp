//
// Created by 11545 on 2021/4/22.
//
#include <string>
#include "iostream"
using namespace std;
int main(){
    int total = 0;
    for(int i=0;i<=2020;i++){
        string str = to_string(i);
        for(int j=0;j<str.length();j++)
            if(str[j]-'0'==2)
                total++;
    }
    cout << total;
    return 0;
}