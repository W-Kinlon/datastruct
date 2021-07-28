//
// Created by 11545 on 2021/4/16.
//
//Dijkstra算法是解决单源最短路的经典算法，现对这样一道简单的题目给出完整代码。
//
//输入n和m，代表n个节点，m条边，然后是m行输入，每行有x,y,z，代表x到y的路距离为z。问题：从1出发到各点的最短路径。
//
//测试样例：

/*
10 12
1 4 1
1 5 1
1 6 1
4 8 1
4 3 1
3 5 1
5 7 1
3 7 1
6 2 1
7 2 1
7 10 1
2 9 1
*/

#include "iostream"
#include "vector"
#define inf 0x3f3f3f
#define VexNum 500
using namespace std;
int n,m;
vector<int> res;
vector<vector <int>> path;
int map[VexNum][VexNum],vis[VexNum],dist[VexNum];

int main(){
    cin >> n >> m;

    //由于初始值从1开始
    n++;
    //初始化结构体
    for(int i=0;i<n;i++){
        vis[i] = 0;
        dist[i] = inf;
        for(int j=0;j<n;j++){
            if(i==j){
                map[i][j] = 0;
            } else{
                map[i][j] = inf;
            }
        }
    }
    path.resize(n);

    //存储图
    for(int i=0;i<m;i++){
        int x,y,z;
        cin >> x >> y >> z;
        map[x][y] = z;
        map[y][x] = z;
    }

    //dijkstra Algorithm
    dist[1] = 0;
    res.push_back(1);
    path[1] = res;
    res.clear();

    for(int i=0;i<n;i++){
        int min = -1;
        for(int j=0;j<n;j++){
            if((!vis[j]) && (min==-1 || dist[j]<dist[min])){
                min = j;
            }
        }
        vis[min] = 1;

        for(int j=0;j<n;j++){
            if(j==min){
                continue;
            }

            if(dist[j] > dist[min] +map[min][j]){
                dist[j] = dist[min] +map[min][j];
                res = path[min];
                res.push_back(j);
                path[j] = path[min];
                res.clear();
            }
        }
    }
}