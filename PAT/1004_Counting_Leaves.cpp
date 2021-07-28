//
// Created by 11545 on 2021/4/16.
//

/*Input Specification:

Each input file contains one test case. Each case starts with a line containing 0<N<100, the number of nodes in a tree, and M (<N), the number of non-leaf nodes. Then M lines follow, each in the format:

ID K ID[1] ID[2] ... ID[K]

where ID is a two-digit number representing a given non-leaf node, K is the number of its children, followed by a sequence of two-digit ID's of its children. For the sake of simplicity, let us fix the root ID to be 01.

The input ends with N being 0. That case must NOT be processed.
Output Specification:

For each test case, you are supposed to count those family members who have no child for every seniority level starting from the root. The numbers must be printed in a line, separated by a space, and there must be no extra space at the end of each line.

The sample case represents a tree with only 2 nodes, where 01 is the root and 02 is its only child. Hence on the root 01 level, there is 0 leaf node; and on the next level, there is 1 leaf node. Then we should output 0 1 in a line.
 * input:
12 2
01 5 02 03 04 05 06
02 2 07 08
07 4 10 11 12 14
 */

#include "iostream"
#include "vector"
#include "queue"


using namespace std;

vector<vector<int>> tree;
vector<int> ans;

int N,M;

//一层一层的树
/*
 * start等于根节点的序号
 * 将根节点入队
 * 当前层last标记为队尾结点
 *
 * 取出对头元素
 * 如果此节点无子树 则计数器加一
 * 若有子树 则将子树结点入队
 * 如果队头元素等于last
 * 则更新last为新队尾
 * 队头出队
 *
 * 重复以上操作直至队列为空
 * */
void layerorder(){
    //开始
    int start = 1;

    //初始化结构体
    int noChild_num=0;
    queue<int> q;

    q.push(start);
    int last = q.back();

    while (!q.empty()){
        int temp = q.front();

        if(tree[temp].size() == 0){
            noChild_num++;
        }else{
            //将当前结点字数全部入队
            for(int i=0;i<tree[temp].size();i++){
                q.push(tree[temp][i]);
            }
        }

        if(temp == last){
            last = q.back();
            ans.push_back(noChild_num);
            noChild_num = 0;
        }

        q.pop();
    }
}

int main(){
    cin >> N >> M;
    tree.resize(100);
    //构建树
    for(int i=0;i<M;i++){
        int id,num;
        cin >> id >> num;
        for(int j=0;j<num;j++){
            int d;
            cin >> d;
            tree[id].push_back(d);
        }
    }

    layerorder();

}
