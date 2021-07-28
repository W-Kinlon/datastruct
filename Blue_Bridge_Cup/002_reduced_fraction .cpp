//
// Created by 11545 on 2021/4/22.
//
#include <string>
#include "iostream"
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int main(){
    long long int sum = 0;
    for(int z=1;z<2021;z++)
        for(int m=1;m<2021;m++)
            if(gcd(z,m)==1)
                sum++;
    cout << sum;
    return 0;
}
