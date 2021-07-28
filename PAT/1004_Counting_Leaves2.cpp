#include "iostream"
#include "vector"
#include "queue"
using namespace std;

int N,M;
vector<vector<int>> tree;
vector<int> ans;
//存放结点序号的队列
queue<int> q;

int main(){
    cin >> N >> M;
    tree.resize(100);

    for(int i=0;i<M;i++){
        int id,num;
        cin >> id >> num;
        for(int j=0;j<num;j++){
            int child;
            cin >> child;
            tree[id].push_back(child);
        }
    }

    int start = 1,last,cnt = 0;
    q.push(start);
    last = q.back();
    while (!q.empty()){
       int temp = q.front();

        if(tree[temp].size() == 0){
            cnt += 1;
        } else{
            for(int i=0;i<tree[temp].size();i++){
                q.push(tree[temp][i]);
            }
        }

        if(temp == last){
            last = q.back();
            ans.push_back(cnt);
            cnt = 0;
        }
        q.pop();
    }

    for(int i = 0;i<ans.size()-1;i++){
        cout << ans[i] << ' ';
    }

    cout << ans.back();


    return 0;
}