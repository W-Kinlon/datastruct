//
// Created by 11545 on 2021/4/15.
//

#include "Graph___AdjacencyTable.cpp"

//深度优先遍历
void DFS(ALGrapgh G,int v){
    bool visited[G.vexnum];

    visited[v] = true;
    for(int w=FirstNeighbour(G,v);w>=0;w=NextNeighbour(G,v,w)){
        if(!visited[w]){
            DFS(G,w);
        }
    }
}
