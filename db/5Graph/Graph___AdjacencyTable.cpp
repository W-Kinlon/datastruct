//
// Created by 11545 on 2021/4/13.
//
#include "iostream"
#define MaxVertexNum 10010
//结点存储类型

//权值
typedef int InfoType;
//结点信息
typedef struct VertexType{
    int num;
    char name;
    bool isEmpty = false;
};


//边 弧(链表)
typedef struct ArcNode{
    //指向那个结点
    VertexType adjVex;
    //指向下一条弧的指针
    struct ArcNode *next;
    //边权值
    InfoType info;
};

//结点 一维数组
typedef struct VNode{
    //结点信息
    VertexType data;
    ArcNode *first;
}VNode,AdjList[MaxVertexNum];

//用邻接表存储的图
typedef struct ALGrapgh{
    //结点序列
    VNode vertices[MaxVertexNum];
    //结点数
    int vexnum;
    //边数
    int arcnum;
};

//查找边<x,y> (x,y)
bool Adjacent(ALGrapgh G,int x,int y){
    bool flag = false;
    for(ArcNode *i=G.vertices[x].first;(i->next != NULL)&&(!i->adjVex.isEmpty);i = i->next){
        if(i->adjVex.num == y){
            flag = true;
        }
    }
    return flag;
}


//出度
int OutDegree(ALGrapgh G,int v){
    int sum = 0;
    for(ArcNode *j=G.vertices[v].first;j->next != NULL;j=j->next){
        if(j->adjVex.isEmpty){
            continue;
        }
        sum++;
    }
    return sum;
}

//入度
int InDegree(ALGrapgh G,int v){
    int sum = 0;
    for(int i=0;i<G.vexnum;i++){
        if(!G.vertices[i].data.isEmpty){
            for(ArcNode *j=G.vertices[i].first;j->next != NULL;j=j->next){
                if(j->adjVex.isEmpty){
                    continue;
                }

                if(j->adjVex.num == v){
                    sum++;
                }
            }
        }
    }
    return sum;
}

//插入新结点x
void InsertVertex(ALGrapgh G,VNode v){

}

//删除结点x
void DeleteVertex(ALGrapgh G,VNode v){
    G.vertices[v.data.num].data.isEmpty = true;
}

//无向图添加边 (x,y)
void AddEdgeUndirected(ALGrapgh G,int x,int y){
    //链表头插法
    ArcNode newArc1;
    newArc1.adjVex.num = y;
    newArc1.next = G.vertices[x].first;
    G.vertices[x].first = &newArc1;

    ArcNode newArc2;
    newArc2.adjVex.num = x;
    newArc2.next = G.vertices[y].first;
    G.vertices[y].first = &newArc2;
}

//有向图添加边 <x,y>
void AddEdgeDirected(ALGrapgh G,int x,int y){
    //链表头插法
    ArcNode newArc;
    newArc.adjVex.num = y;
    newArc.next = G.vertices[x].first;
    G.vertices[x].first = &newArc;
}

int FirstNeighbour(ALGrapgh G,int x){
    if(G.vertices[x].first != NULL){
        return G.vertices[x].first->adjVex.num;
    } else{
        return -1;
    }
}

//顶点y是顶点x的一个临接点
int NextNeighbour(ALGrapgh G,int x,int y){
    for(ArcNode *j=G.vertices[x].first;j->next != NULL;j=j->next){
        if(j->adjVex.isEmpty){
            continue;
        }
        if(j->adjVex.num == y){
            return j->next->adjVex.num;
        }
    }
    return -1;
}

























int demo(){
    ALGrapgh G;
    G.vexnum = 6;
    G.vertices[0].data.num = 0;
    G.vertices[0].data.name = 'A';
    G.vertices[1].data.num = 1;
    G.vertices[1].data.name = 'B';
    G.vertices[2].data.num = 2;
    G.vertices[2].data.name = 'C';
    G.vertices[3].data.num = 3;
    G.vertices[3].data.name = 'D';
    G.vertices[4].data.num = 4;
    G.vertices[4].data.name = 'E';
    G.vertices[5].data.num = 5;
    G.vertices[5].data.name = 'F';

    ArcNode a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14;
    a3.adjVex.num = 3;
    a3.next = NULL;
    a2.adjVex.num = 2;
    a2.next  =&a3;
    a1.adjVex.num = 1;
    a1.next = &a2;
    G.vertices[0].first = &a1;


    return 0;
}