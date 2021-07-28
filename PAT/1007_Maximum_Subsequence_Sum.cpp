//
// Created by 11545 on 2021/4/17.
//

#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> all;
    int K;
    cin >> K;
    for(int i=0;i<K;i++){
        int a;
        cin >> a;
        all.push_back(a);
    }

    struct MaxNum{
        int start;
        int end;
        int i;
        int j;
        signed int sum;
    };

    MaxNum res;
    res.sum = -0x3f3f3f;

    for(int i=0;i<all.size();i++){
        int sum = 0;
        for(int j=i;j<all.size();j++){
            sum += all[j];
            MaxNum item;
            item.i = i;
            item.j = j;
            item.start = all[i];
            item.end = all[j];
            item.sum = sum;
            if(item.sum > res.sum){
                res = item;
            }
            if(item.sum == res.sum){
                if((res.i+res.j) > (item.i+item.j)){
                    res = item;
                }
            }
        }
    }


    if(res.sum < 0){
        bool flag = true;
        for(int i=0;i<K;i++){
            if(all[i] > 0){
                flag = false;
                break;
            }
        }
        if(flag){
            res.sum = 0;
            res.start = all[0];
            res.end = all[K-1];
        }
    }

    cout << res.sum << ' ' << res.start << ' ' << res.end;
    return 0;
}