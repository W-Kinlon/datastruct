//
// Created by 11545 on 2021/4/28.
//

#include "iostream"
#include "iomanip"
#include "vector"
using namespace std;

int main(){
    struct EveryMax{
        double num;
        char name;
    };
    char names[3] = {'W','T','L'};
    vector<EveryMax> table;
    for(int i=0;i<3;i++){
        EveryMax everyMax;
        everyMax.num = -0x3f3f3f;
        for(int j=0;j<3;j++){
            double temp;
            cin >>temp;
            if(temp>everyMax.num){
                everyMax.num = temp;
                everyMax.name = names[j];
            }
        }
        table.push_back(everyMax);
    }
    double res = 2*0.65;
    for(int i=0;i<table.size();i++){
        auto item = table[i];
        cout << item.name << ' ';
        res *= item.num;
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << (res-2);
    return 0;
}