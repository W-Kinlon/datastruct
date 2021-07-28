//
// Created by 11545 on 2021/4/28.
//
#include "iostream"
#include "map"
#include "vector"
#include "list"
#include "string"
using namespace std;

struct Stu{
    string id;
    int score;
};

vector<list<Stu>> _insert(vector<list<Stu>> ranks,int location,Stu temp){
    auto c = temp.score;
    //大于头部用头插法
    if(c>=ranks[location].front().score) ranks[location].push_front(temp);
    //小于尾部用尾插法
    else if(c<=ranks[location].back().score) ranks[location].push_back(temp);
    //其余选择插入
    else{
        auto begin = ranks[location].begin();
        auto end = ranks[location].end();
        while (begin != end){
            auto little_item = *begin;
            if((*begin).score >= c && c <= (*++begin).score ){
                ranks[location].insert(begin,temp);
                ++begin;
            }
        }
    }
    return ranks;
}

int main(){
    int N,M;
    char subjects[] = {'A','C','M','E'};
    vector<list<Stu>> ranks;
    ranks.resize(4);
    cin >> N >> M;
    for (int k = 0; k < N; k++){
        string id;
        cin >> id;
        Stu temp;
        temp.id = id;
        int a=0;
        for(int j=0;j<3;j++){
            int c;
            cin>>c;
            a+=c;
            temp.score = c;
            if(k==0){
                ranks[j+1].push_back(temp);
            }
            else{
                ranks = _insert(ranks,j+1,temp);
            }
        }
        temp.score = a/3;
        if(k==0){
            ranks[0].push_back(temp);
        }
        else{
            ranks = _insert(ranks,0,temp);
        }
    }

    vector<string> to_res;
    for (int k = 0; k < M; k++){
        string id;
        cin >> id;
        to_res.push_back(id);
    }
    for (int k = 0; k < M; k++){
        auto id = to_res[k];
        bool isNa = true;
        int record = 0x3f3f3f,subject = -1;
        for(int i=0;i<ranks.size();i++){
            auto item = ranks[i];
            auto begin = item.begin();
            auto end = item.end();
            int j = 0;
            while (begin != end){
                auto little_item = *begin;
                if(little_item.id == id){
                    isNa = false;
                    if(j+1<record){
                        record = j+1;
                        subject = i;
                    }
                    if(j+1==record) subject = min(i,subject);
                }else continue;
                ++begin;
                j++;
            }
            if(isNa)break;
        }
        if(!isNa) cout << record << ' ' << subjects[subject]<< endl;
        else cout << "N/A";
    }
    return 0;
}