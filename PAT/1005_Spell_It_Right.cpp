//
// Created by 11545 on 2021/4/16.
//
#include "iostream"
#include "string"
#include "list"
#include "vector"


using namespace std;
string inl;
vector<string> ans;


int main(){
    cin >> inl;

    int sum = 0;

    string en[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<inl.size();i++){
        sum += inl[i] - '0';//-48
    }

    auto str_sum = to_string(sum);
    for(int i=0;i<str_sum.size()-1;i++){
        cout << en[str_sum[i] - '0'] << ' ';
    }
    cout << en[str_sum[str_sum.size()-1] - '0'];
    return 0;
}

//    list<int> res;
//    while (sum){
//        res.push_back(sum % 10);
//        sum  = (int) sum/10;
//    }
//    res.reverse();
//
//    //迭代器
//    auto begin = res.begin();
//    auto end = res.end();
//    while (begin != end){
//        ans.push_back(en[*begin]);
//        begin++;
//    }
//
//    for(int i=0;i<ans.size()-1;i++){
//        cout << ans[i] << ' ';
//    }
//    cout << ans[ans.size()-1];

//    return 0;
//}
