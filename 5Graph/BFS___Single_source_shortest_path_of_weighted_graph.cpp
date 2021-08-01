//
// Created by 11545 on 2021/4/13.
//
#include "iostream"
#include "Graph___AdjacencyTable.cpp"
#include "Graph___AdjacencyMatrix.cpp"



#define MAX 10010


//访问函数
void visit(int v){}
//队列判空
bool isEmpty(){}
//结点入队函数
void Enqueue(int v);
//结点出队函数
void DeQueue(int v);


//从顶点出发 广度优先遍历
void BFS(ALGrapgh G,int v){
    //访问标记数组
    bool visited[MAX];
    //从结点v到i的最短距离
    int distance[G.vexnum];
    //i前驱
    int path[G.vexnum];


    //对列表初始化
    for(int i=0;i<G.vexnum;i++){
        distance[i] = MAX;
        path[i] = -1;
    }

    distance[v] = 0;

    //对v做已访问标记
    visited[v] = true;

    //顶点v入队
    Enqueue(v);
    while (!isEmpty()){
        //队头出队 赋值给v
        DeQueue(v);
        //遍历v结点的后续结点
        for(ArcNode *w=G.vertices[v].first;w->next != NULL;w=w->next){
            //w为v尚未访问节点
            if(!visited[w->adjVex.num]){
                //路径长度加一 更改前驱
                distance[w->adjVex.num] = distance[v]+1;
                path[w->adjVex.num] = v;
                visited[w->adjVex.num] = true;
                //顶点入队
                Enqueue(v);
            }
        }
    }

}



int main(){

    return 0;
}
