//
// Created by 11545 on 2021/4/17.
//
#include "iostream"
#include "vector"
using namespace std;
const int stop=5,up=6,down=4;
int sum = 0;


int main(){
    int N;
    cin >> N;
    vector<int> floors;
    floors.push_back(0);
    for(int i=0;i<N;i++) {
        int a;
        cin >> a;
        floors.push_back(a);
    }
    for(int i=0;i<floors.size()-1;i++) {
        int step = floors[i+1] - floors[i];
        if(step>0){
            sum += up*step;
        } else{
            sum += down*(-step);
        }
        sum += stop;
    }
    cout << sum;
    return 0;
}