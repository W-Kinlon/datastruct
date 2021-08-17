//
// Created by 11545 on 2021/4/14.
//

//邻接多重表

#include "iostream"
#define Max 100

using namespace std;
typedef struct ArcNode{
    int i;
    int j;

    int info;
    //依附于顶点i的下一条边
    ArcNode *iLink;
    //依附于顶点j的下一条边
    ArcNode *jLink;
};

typedef struct VexNode{
    string data;
    //与该顶点相连的第一条边
    ArcNode *firstEdge;
};

typedef struct AdMuTGraph{
    int vnum,anum;
    VexNode vexNode[Max];
};