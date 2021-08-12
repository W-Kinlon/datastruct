//
// Created by Kinlon Wong on 2021/8/5.
//

#include "iostream"
using namespace std;

int main(){
    int n,m;
    bool isZhiPai=true;
    cin >> n >> m;
    while (m--){
        isZhiPai = !isZhiPai;
        if(isZhiPai)
            n *= 2;
    }
    cout << int(!isZhiPai) << ' ' << n;


    return 0;
}