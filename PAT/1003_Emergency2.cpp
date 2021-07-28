//
// Created by 11545 on 2021/4/16.
//
#include "iostream"
#define infinit 0x3f3f3f
#define VexNum 501
using namespace std;


int N,M,c1,c2;
int map[VexNum][VexNum],city_source[VexNum];
int Distance[VexNum],isVisited[VexNum];
int tot_source[VexNum],tot_short_roads[VexNum];


void dij(){
    Distance[c1] = 0;
    tot_source[c1] = city_source[c1];
    tot_short_roads[c1] = 1;

    //迭代次数
    for(int i=0;i<N;i++){

        //找到距离最小且没有被访问的结点
        int min = -1;
        for(int j=0;j<N;j++){
            if((!isVisited[j]) && (min == -1 || Distance[j] < Distance[min])){
                min = j;
            }
        }

        //访问此结点
        isVisited[min] = 1;

        //更新距离列表
        for(int k=0;k<N;k++){
            //结点相同时
            if(k==min){
                continue;
            }

            //当结点距离等于从当前结点过去的距离
            //则最短路径数加上当前节点的个数
            //资源数 在原数和当前结点的总数以及当前节点的资源数 中取大
            if(Distance[k] == Distance[min] + map[min][k]){
                tot_short_roads[k] += tot_short_roads[min];
                tot_source[k] = max(tot_source[k],tot_source[min] + city_source[k]);
            }

            //当结点距离大于当前结点过去的距离
            //更新距离
            //则最短路径数换成当前结点的最短路径数
            //资源数等于当前节点过去的资源数
            if(Distance[k] > Distance[min] + map[min][k]){
                Distance[k] = Distance[min] +map[min][k];
                tot_short_roads[k] = tot_short_roads[min];
                tot_source[k] = tot_source[min] + city_source[k];
            }
        }

    }




}

int main(){
    cin >> N >> M >> c1 >> c2;


    for(int i=0;i<N;i++){
        cin >> city_source[i];

        //初始化需要的结构体
        tot_source[i] = 0;
        tot_short_roads[i] = 0;
        Distance[i] = infinit;
        isVisited[i] = 0;

        for(int j=0;j<N;j++){
            //城市相同
            if(i==j){
                map[i][j] = 0;
            } else{
                map[i][j] = infinit;
            }
        }
    }


    for(int i=0;i<M;i++){
        int city1,city2,distance;
        cin >> city1 >> city2 >> distance;
        map[city1][city2] = distance;
        map[city2][city1] = distance;
    }

    dij();

    cout << tot_short_roads[c2] << ' ' << tot_source[c2];

    return 0;
}