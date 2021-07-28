//
// Created by 11545 on 2021/4/29.
//

#include "iostream"
#include "vector"
#include "queue"
using namespace std;
int N=0,M=0,K=0;
vector<vector<int>> map;
vector<int> checked,result;


void add_route(vector<vector<int>> &map,int start,int end){
    auto temp = map[start];
    bool flag = true;
    for(int i=0;i<temp.size();i++) {if (temp[i] == end) { flag = false; break;}}
    if(flag){
        temp.push_back(end);
        map[start] = temp;
    }
}

int main(){
    cin>>N>>M>>K;

    vector<int> _temp;_temp.resize(0);
    map.resize(N+1, _temp);

    while (M--){
        int start=0,end=0;
        cin>>start>>end;
        add_route(map,start,end);
        add_route(map,end,start);
    }

    for(int i=0;i<K;i++){
        int a;
        cin >> a;
        checked.push_back(a);
    }
    result.resize(K);

    for(int i=0;i<checked.size();i++){
        auto lost = checked[i];
        auto map_copy = map;
        map_copy[lost].resize(0);

        int need_repair = 0;
        for(int current_city=1;current_city<N+1;current_city++){
            if(current_city==lost)continue;

            //层序遍历
            queue<int> route_net;queue<int> current_city_can_arrive;
            int this_need_repair = 0;
            for(int j=0;j<map_copy[current_city].size();j++) {
                if(map_copy[current_city][j] == lost) continue;
                route_net.push(map_copy[current_city][j]);
                current_city_can_arrive.push(map_copy[current_city][j]);
            }
            while (!route_net.empty()){
                for(int j=0;j<map_copy[route_net.front()].size();j++) {
                    if(route_net.front() == lost) continue;
                    route_net.push(map_copy[route_net.front()][j]);
                    current_city_can_arrive.push(map_copy[current_city][j]);
                }route_net.pop();
            }

            //比较current_city_can_arrive和所有城市的区别
            



            need_repair += this_need_repair;
        }



    }



    return 0;
}