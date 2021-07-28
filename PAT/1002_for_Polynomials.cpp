//
// Created by 11545 on 2021/4/16.
//
#include <vector>
#include "iostream"
#include "iomanip"
#include "cstring"
#define MAX 1005
using namespace std;

float polo[MAX];

int main(){
    memset(polo,0.0, sizeof(polo));

    int max = 0;
    for(int i=0;i<2;i++){
        int K;
        cin >> K;
        for(int j=0;j<K;j++){
            int c;
            float e;
            cin >> c >> e;
            polo[c] += e;
            if(c>max) max=c;
        }
    }
    int cnt = 0;
//    新方法
    for(int i = max;i>-1;i--)
        if (polo[i] != 0)
            cnt++;

    cout << cnt;
    for(int i = max;i>-1;i--){
        if (polo[i] != 0){
//            设置输出的小数位为1  <<setiosflags(ios::fixed)<<setprecision(1)
            cout << ' '<<i<<' ' <<setiosflags(ios::fixed)<<setprecision(1)<< polo[i];
            cnt--;
            if(cnt == 0){
                break;
            }
        }
    }


//    另一种方法
//    vector<float> pout;
//
//    for(int i = MAX-1;i>-1;i--){
//        if (polo[i] == 0){
//            continue;
//        } else{
//            cnt++;
//            pout.push_back(i);
//            pout.push_back(polo[i]);
//        }
//
//    }
//
//    cout << cnt << ' ';
//    int size = pout.size();
//    for(int i=0;i<size-2;i += 2){
//        printf("%1.0f %1.1f ",pout[i],pout[i+1]);
//    }
//    printf("%1.0f %1.1f",pout[size-2],pout[size-1]);
    return 0;
}