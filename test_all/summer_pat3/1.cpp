//
// Created by Kinlon Wong on 2021/7/20.
//

#include "iostream"
#include "vector"
using namespace std;
int N,he_max,he_min,age_max,age_min;
bool isFirst= true;

struct person{
    string name,tel;
    int height,age;
};
vector<person> res;

void Swap(person &a,person &b){
    auto temp=a;a=b;b=temp;
}

void sort(vector<person> &list){
    for(int i=0;i<list.size()-1;i++)
        for(int j=i+1;j<list.size();j++){
            if(list[j].height < list[i].height) Swap(list[i],list[j]);
            if((list[j].height == list[i].height) && (list[j].age < list[i].age)) Swap(list[i],list[j]);
        }
}

bool isExit(string _name){
    for(int i=0;i<res.size();i++)
        if(_name == res[i].name) return true;
    return false;
}

void detail(){
    res.clear();
    while (N--){
        string name,tel;int height,age;person temp;
        cin >>name>>height>>age>>tel;
        if((height>=he_min&&height<=he_max) && (age>=age_min&&age<=age_max) && !isExit(name)) {
            temp.name=name;
            temp.tel=tel;
            temp.height=height;
            temp.age=age;
            res.push_back(temp);
        }
    }

    sort(res);
    auto size = res.size();
    if(isFirst) isFirst= false;
    else cout << '\n';
    cout << size <<'\n';
    for(int i=0;i<size-1;i++)
        cout << res[i].name << ' '<< res[i].height << ' '<< res[i].age << ' '<< res[i].tel << '\n';
    cout << res[size-1].name << ' '<< res[size-1].height << ' '<< res[size-1].age << ' '<< res[size-1].tel;
}

int main(){
    for (;cin>>N;){
        cin>>he_min>>he_max>>age_min>>age_max;
        detail();
    }
    return 0;
}