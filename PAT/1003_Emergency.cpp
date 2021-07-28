//
// Created by 11545 on 2021/4/15.
//
#include <algorithm>
#include <iostream>
#include "cstring"

using namespace std;
const int N=505,INF=0x3f3f3f;
int city_source[N],city_matrix[N][N];//城市邻接矩阵 data为距离

/*tot_shorted_roads[i]  c1到i的最短路径数
 * tot_source[i] c1到i的资源总数
 * */
int tot_source[N],dist[N],visited[N],n,m,c1,c2,tot_shorted_roads[N];

//初始化全局变量
void init(){
    //给dist的前sizeof(dist)个字符赋值为INF
    memset(dist, INF, sizeof(dist));
    memset(visited, 0, sizeof(visited));
    memset(tot_source, 0, sizeof(tot_source));
    memset(tot_shorted_roads, 0, sizeof(tot_shorted_roads));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //城市相同
            if(i==j){
                city_matrix[i][j] = 0;
            } else{
                city_matrix[i][j] = INF;
            }
        }
    }
}

//dijkstra最短路径算法
void dijkstra(){
    dist[c1] = 0;
    tot_source[c1] = city_source[c1];
    tot_shorted_roads[c1] = 1;

    for(int i=0;i<n;i++){
        int v=-1;
        for(int j=0;j<n;j++){
            if((!visited[j]) && (v == -1 || dist[j]<dist[v])){
                v=j;
            }
        }

        visited[v] = 1;
        for(int j=0;j<n;j++){
            if(j==v){
                continue;
            }

            //松弛操作
            /*如果从c1城到j城距离 与 从c1到v再到j城距离 相等
             * 到j城最短路径数 自增 到v城最短路径数
             * 运送最大资源数 取大
             * */
            if(dist[j] == dist[v] + city_matrix[v][j]){
                tot_shorted_roads[j] += tot_shorted_roads[v];
                tot_source[j] = max(tot_source[j], tot_source[v] + city_source[j]);
            }
            if(dist[j] > dist[v] + city_matrix[v][j]) {
                dist[j] = dist[v] + city_matrix[v][j];
                tot_shorted_roads[j] = tot_shorted_roads[v];
                tot_source[j] = tot_source[v] + city_source[j];
            }
        }
    }
}

int main(){
    cin >> n >> m >> c1 >> c2;
    init();
    for(int i=0;i<n;i++){
        cin >> city_source[i];
    }

    for(int i=0;i<m;i++){
        int city1,city2,length;
        cin >> city1 >> city2 >> length;
        city_matrix[city1][city2] = length;
        city_matrix[city2][city1] = length;
    }

    dijkstra();
    cout << tot_shorted_roads[c2] << ' ' << tot_source[c2];
    return 0;
}