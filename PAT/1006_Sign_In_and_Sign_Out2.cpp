//
// Created by 11545 on 2021/4/17.
//

#include "iostream"
#include "string"
#define inf 0x3f3f3f
using namespace std;

struct Person{
    string id;
    int Sign_in_time;
    int Sign_out_time;
};
int M;

int main(){
    cin >> M;
    Person min_in,max_out;
    min_in.Sign_in_time = inf;
    max_out.Sign_out_time = 0;

    for(int i=0;i<M;i++) {
        string id;
        cin >> id;
        int h1, m1, s1, h2, m2, s2;
        scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
        int time_in = h1 * 3600 + m1 * 60 + s1;
        int time_out = h2 * 3600 + m2 * 60 + s2;
        if(time_in < min_in.Sign_in_time){
            min_in.Sign_in_time = time_in;
            min_in.id = id;
        }
        if(time_out > max_out.Sign_out_time){
            max_out.Sign_out_time = time_out;
            max_out.id = id;
        }
    }
    cout << min_in.id << ' ' << max_out.id;
    return 0;
}