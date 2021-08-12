//
// Created by Kinlon Wong on 2021/8/10.
//

#include "iostream"
#include "vector"
#include "queue"
using namespace std;
int m,n,k,s,d;
vector<int> safe_city;vector<vector<int>> map;

bool isSafe(vector<int> list, int x){
    for(int i=0;i<list.size();i++)
        if(list[i]==x) return true;
    return false;
}

bool isArrive(){
    //层序遍历
    queue<int> _queue;
    _queue.push(s);
    while (!_queue.empty()){
        auto front = _queue.front();_queue.pop();
        for(int i=0;i< map[front].size();i++){
            auto item = map[front][i];
            if(isSafe(safe_city,item)) {
                if(item==d) return true;
                _queue.push(item);
            }
        }
    }
    return false;
}

int main(){
    cin >>m>>n>>k;
    map.resize(m, vector<int>());

    while (n--){
        int a;cin >> a;
        safe_city.push_back(a);
    }
    while (k--){
        int a,b;cin>>a>>b;
        map[a].push_back(b);map[b].push_back(a);
    }
    cin >> s >> d;

    if(!isSafe(safe_city, d)) cout << "The city " << d << " is not safe!";
    else if(isArrive()) cout << "The city " << d <<" can arrive safely!";
    else cout << "The city " << d <<" can not arrive safely!";

    return 0;
}