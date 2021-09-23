//
// Created by Kinlon Wong on 2021/9/1.
//

#include "iostream"
using namespace std;

typedef int semaphore;

semaphore plate=1,apple=0,orange=0;
void P(semaphore S){
    while (S<=0);
    S--;
}
void V(semaphore S){
    S++;
}

void dad(){
    cout << "爸爸：削好个苹果";
    P(plate);
    cout << "爸爸：放到盘子里啦";
    V(apple);
}
void mother(){
    cout << "妈妈：剥好个橘子";
    P(plate);
    cout << "妈妈：放到盘子里啦";
    V(orange);
}
void son(){

}


int main(){
    return 0;
}