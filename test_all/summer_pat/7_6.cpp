//
// Created by Kinlon Wong on 2021/8/5.
//

#include "iostream"
#include "string"
#include "vector"
using namespace std;


bool isExist(vector<string> _all_people,string _people){
    if(_all_people.empty()) return false;
    for(int i=0;i<_all_people.size();i++)
        if(_all_people[i] == _people) return true;
    return false;
}

int main(){
    vector<string> have_friend;
    int n;
    cin >> n;
    while (n--){
        int m;
        cin >> m;
        for (int i = 0; i < m; i++){
            string people;
            cin >> people;
            if(m!=1 && !isExist(have_friend, people)) have_friend.push_back(people);
        }
    }
    cin >> n;string check;
    vector<string> need_print;
    while (n--){
        cin >> check;
        if(!isExist(have_friend, check) && !isExist(need_print, check))
            need_print.push_back(check);
    }
    if(need_print.empty()) cout << "No one is handsome";
    else {
        for (int i = 0; i < need_print.size() - 1; i++) {
            cout << need_print[i] << ' ';
        }
        cout << need_print[need_print.size() - 1];
    }



    return 0;
}