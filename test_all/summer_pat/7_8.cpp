//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "vector"
#include "queue"
using namespace std;



int main(){
    int n;cin >> n;
    while (n--){
        int num,sum=0;
        cin >> num;
//        num =15;
        while (num>1){

            if(num % 2==0){
                sum++;num /= 2;
            } else{
                num--;
                sum++;num /= 2;num++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}