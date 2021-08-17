//
// Created by Kinlon Wong on 2021/8/14.
//
#include "iostream"
#include "vector"
#include "queue"
using namespace std;



//5邻接表图 输出所有i,j简单路径
void detail(vector<vector<int>> graph,int i,int j,vector<int> path){
    auto nexts = graph[i];
    for(int k=0;k< nexts.size();k++){
        auto next = nexts[k];
        path.push_back(next);
        if(next == j)
        if(graph[next].size()>0)
            detail(graph,next,j,path);
    }
}
void alogrithm_5(){
    vector<vector<int>> graph;
    vector<int> path,visit,nexts;
    int i,j;
    cin >> i >> j;
    detail(graph,i,j,path);



}

