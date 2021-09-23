//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "math.h"
#include "stdlib.h"

using namespace std;

int main(){
    int n = 10000000,sum = 0;
    while (n--){
        int k = rand();
        int m = rand();
        bool a=int(log(k+1)/log(2)+0.5) -
                int(log(m+1)/log(2)+0.5)
                !=
                int(log(k)/log(2)) -
                int(log(m)/log(2));
        if(a) sum++;
    }
    cout << sum;

    return 0;
}