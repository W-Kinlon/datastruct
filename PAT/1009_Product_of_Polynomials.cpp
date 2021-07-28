//
// Created by 11545 on 2021/4/17.
//
#include "iostream"
#include "iomanip"
#include "cstring"

float polo[1001],res[2005];

using namespace std;
int main(){
    memset(polo,0.0, sizeof(polo));
    memset(res, 0.0, sizeof(res));
    for(int i=0;i<2;i++){
        int K;
        cin >> K;

        for(int k=0;k<K;k++){
            int a;
            float b;
            cin >> a >> b;
            if(i == 0)
                polo[a] = b;
            else
                for(int j=0;j<1001;j++)
                    if(polo[j] != 0.0)
                        res[j + a] += polo[j] * b;
        }
    }

    int cnt = 0;
    for(int i = 2000;i>-1;i--)
        if(res[i] != 0) cnt++;
    cout << cnt;

    for(int i = 2000;i>-1;i--)
        if(res[i] != 0)
            cout << ' ' << i <<' ' << setiosflags(ios::fixed) << setprecision(1) << res[i];
    return 0;
}