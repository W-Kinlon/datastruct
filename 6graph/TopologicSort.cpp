//
// Created by 11545 on 2021/4/15.
//

#include "Graph___AdjacencyTable.cpp"
#include "Stack.cpp"
int print[10010];

bool TopologicSort(ALGrapgh G){
    Stack S;
    //初始化栈 存储入度为0的结点
    InitStack(S);

    for(int i=0;i<G.vexnum;i++){
        if(InDegree(G,i) == 0){
            PushStack(S,i);
        }
    }
    //计数 记录当前已输出的顶点数
    int count = 0;

    while (!isEmptyStack(S)){
        //出栈
        PopStack(S,i);
        //输出顶点i
        print[count++] = i;

        for(ArcNode p=G.vertices[i].first;p != NULL;p = p.next){
            VertexType v = p.adjVex;
            if(!(--InDegree(G,v))){
                PushStack(S,v);
            }
        }
    }

    if(count<G.vexnum){
        return false;
    } else{
        return true;
    }
}