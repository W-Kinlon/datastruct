//
// Created by Kinlon Wong on 2021/8/16.
//

//任意最短路径
/*
1 10 2
1 5 5
4 7 1
2 2 5
5 3 2
5 2 4
5 9 3
2 1 3
3 4 4
4 6 9

 */

#include "iostream"
#include "vector"
#include "list"
#include "queue"

#define MAX 0x3f3f3f

using namespace std;
struct EdgeNode{
    int end_vertex;//序号
    int weight;//权值
};

struct Graph{
    vector<vector<EdgeNode>> vertexs;
};
Graph g;
vector<vector<int>> path,dis;



void alogrithm(){
    auto n = g.vertexs.size();
    //初始化
    vector<int> t;t.resize(n,0x3f3f3f);
    dis.resize(n,t);
    t.resize(n,-1);
    path.resize(n,t);
    for(int i=0;i<n;i++){
        for(int j=0;j<g.vertexs[i].size();i++){
            dis[i][j] = g.vertexs[i][j].weight;
            path[i][j] = i;
        }
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          for(int k=0;k<n;k++){
              if(dis[i][k]+dis[k][j] < dis[i][j]){
                  dis[i][j] = dis[i][k]+dis[k][j];
                  path[i][j] = path[i][k];
              }
          }
}


int main(){
    int n = 10,m = 5;
    g.vertexs.resize(m);
    while (n--){
        int a,b,c;
        cin >> a >> b >> c;
        a--;c--;
        EdgeNode edgeNode;
        edgeNode.end_vertex = c;
        edgeNode.weight = b;
        g.vertexs[a].push_back(edgeNode);
    }
    alogrithm();

    cout << dis[0][2];
    return 0;
};