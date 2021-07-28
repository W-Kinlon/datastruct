//
// Created by 11545 on 2021/4/14.
//

//有向图

#define MaxVertexNum 100

typedef struct ArcNode{
    //弧头弧尾编号
    int head_vex_num;
    int tail_vex_num;

    //权值
    int info;
    //弧头相同的下一条指针
    ArcNode *head_link;
    //弧尾相同的下一条指针
    ArcNode *tail_link;
};

typedef struct VexData{
    char data;
};

typedef struct VexNode{
    VexData vexData;

    //以该节点为弧头的第一条弧
    ArcNode *first_in;
    //以该节点为弧尾的第一条弧
    ArcNode *first_out;
};


typedef struct OrthogonalGraph {
    int vex_num,arc_num;
    VexNode vex[MaxVertexNum];
};

int demo(){
    OrthogonalGraph G;
    G.vex[0].vexData.data = 'A';
    G.vex[1].vexData.data = 'B';
    G.vex[2].vexData.data = 'C';
    G.vex[3].vexData.data = 'D';

    ArcNode a1;
    a1.head_vex_num = 0;
    a1.tail_vex_num = 1;
    ArcNode a2;
    a2.head_vex_num = 0;
    a2.tail_vex_num = 2;
    ArcNode a3;
    a3.head_vex_num = 2;
    a3.tail_vex_num = 3;
    ArcNode a4;
    a4.head_vex_num = 3;
    a4.tail_vex_num = 1;
    ArcNode a5;
    a5.head_vex_num = 3;
    a5.tail_vex_num = 2;
    ArcNode a6;
    a6.head_vex_num = 3;
    a6.tail_vex_num = 0;
    ArcNode a7;
    a7.head_vex_num = 2;
    a7.tail_vex_num = 0;

    a1.head_link = &a2;
    a1.tail_link = &a4;
    a4.tail_link = &a6;


    return 0;
}


