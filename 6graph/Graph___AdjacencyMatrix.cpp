//
// Created by 11545 on 2021/4/14.

/*邻接矩阵法性能分析
 * 空间复杂度 O(v^2) 只和顶点数有关
 *适合存储稠密图
 * */

#include "iostream"
#include "string"
#include "map"
#define MaxVertexNum 100

using namespace std;

//顶点信息结构体
typedef struct VexInfo{
    int num;
    string name;
    map<string,string> map;
};
//权值数据类型
typedef struct EdgeType{
    bool display;
};

typedef struct MatrixGraph{
    //顶点信息
    VexInfo Vex[MaxVertexNum];
    //矩阵数据
    EdgeType Edge[MaxVertexNum][MaxVertexNum];
    int vexnum,arcnum;
};
//v结点出度
int OutDegree(MatrixGraph G,int v){
    //遍历矩阵第v行
    int sum = 0;
    for(int i=0;i< G.vexnum;i++){
        if(G.Edge[v][i].display){
            sum++;
        }
    }
    return sum;
}

//v结点入度
int InDegree(MatrixGraph G,int v){
    //遍历矩阵第v列
    int sum = 0;
    for(int i=0;i<G.vexnum;i++){
        if(G.Edge[i][v].display){
            sum++;
        }
    }
    return sum;
}

