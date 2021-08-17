//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "vector"
#include <string.h>
using namespace std;
int n,d;
vector<vector<int>> table;


struct number{
    int weight=0x3f3f3f,x,y;
} _min[4],_max;

void Insert(number x) {
    for (int i = 0; i < 4; i++) {
        if (x.weight < _min[i].weight) {
            for (int j = 3; j > i; --j) _min[j] = _min[j - 1];
            _min[i] = x;
            return;
        }
    }
}

void Swap(int x,int y,number i){
    auto temp = table[x][y];
        table[x][y] = i.weight;
        table[i.x][i.y] = temp;
}

int main(){
    cin>>n;
    _max.weight = -0x3f3f3f;
    table.resize(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            cin >> d;
            number _d;_d.weight=d;_d.x=i;_d.y=j;
            Insert(_d);
            if(d > _max.weight) _max=_d;
            table[i].push_back(d);
        }

    Swap(0,0,_min[0]);
    Swap(0,n-1,_min[1]);
    Swap(n-1,0,_min[2]);
    Swap(n-1,n-1,_min[3]);
    Swap(n/2,n/2,_max);

    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; j++) {
            cout << table[i][j];
            if(j<n-1) cout<<' ';
        }
        if(i<n) cout<<'\n';
    }


    return 0;
}