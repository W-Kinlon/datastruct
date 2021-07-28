//
// Created by 11545 on 2021/4/17.
//

#include "iostream"
#include "vector"
#include "string"
#define inf 0x3f3f3f
using namespace std;

typedef struct Person{
    string id;
    vector<int> Sign_in_time;
    vector<int> Sign_out_time;
};
int M;
vector<Person> all;

bool big(vector<int> t1,vector<int> t2,int start){
    auto size = t1.size();
    if(t1[start] < t2[start]){
        return false;
    } else if(t1[start] > t2[start]){
        return true;
    } else if(t1[start] == t2[start]){
        if(start + 1 < size){
            big(t1,t2,start+1);
        }
    }
}

int main(){
    cin >> M;
//    all.resize(M);
    for(int i=0;i<M;i++){
        string id;

        Person temp_person;
        cin >> id;
        temp_person.id = id;
        string time1,time2;
        cin >> time1 >> time2;
        for(int k=0;k<time1.size();k = k+3){
            int t1 = (time1[k] - '0')*10 + (time1[k+1] - '0');
            temp_person.Sign_in_time.push_back(t1);
            int t2 = (time2[k] - '0')*10 + (time2[k+1] - '0');
            temp_person.Sign_out_time.push_back(t2);
        }
        all.push_back(temp_person);
    }

    Person min_in,max_out;
    min_in.Sign_in_time.resize(3,inf);
    max_out.Sign_out_time.resize(3,0);

    for(int i=0;i<all.size();i++){
        auto item = all[i];
        if (big(min_in.Sign_in_time,item.Sign_in_time,0)){
            min_in = item;
        }
        if (big(item.Sign_out_time,max_out.Sign_out_time,0)){
            max_out = item;
        }
    }

    cout << min_in.id << ' ' << max_out.id;
    return 0;
}