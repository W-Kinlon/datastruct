//
// Created by Kinlon Wong on 2021/8/14.
//单源最短路径
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

vector<int> path,dis;



void alogrithm(Graph g,int V0){
    auto n = g.vertexs.size();
    queue<int> _q;_q.push(V0);
    //初始化
    dis.resize(n,MAX);dis[V0]=0;
    path.resize(n,-1);path[V0]=V0;

    while (!_q.empty()){
        auto front = _q.front();_q.pop();
        for(auto i=0; i<g.vertexs[front].size();i++) {
            auto edge = g.vertexs[front][i];
            //初始化
            //比较距离
            //如果小 则更新距离、前驱表
            if(front==V0 || dis[front] + edge.weight < dis[edge.end_vertex]){
                path[edge.end_vertex] = front;
                dis[edge.end_vertex] = dis[front] + edge.weight;
                _q.push(edge.end_vertex);
            }

        }
    }
}

void getResult(){

}

int main(){
    int n = 10,m = 5;
    Graph g;
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
    alogrithm(g,0);

    cout<<dis[2];
    return 0;
};