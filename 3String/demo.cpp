//
// Created by Kinlon Wong on 2021/8/1.
//
#include "iostream"

typedef struct String{
    int length;
    char *ch;
};


//next数组
void get_next(String T,int _next[]){
    int i=1,j=0,next[T.length+1];
    next[1] = 0;
    while (i<T.length){
        if(j==0 || T.ch[i]==T.ch[j]) {
            ++i;
            ++j;
            next[i] = j;
        } else
            j = next[j];
    }
    for(int _i=0;_i<T.length;_i++)
        _next[_i] = next[_i+1];
}

//kmp匹配算法
int index_kmp(String s,String t){
    int next[t.length];
    get_next(t,next);
    int i=1,j=1;
    while (i<=s.length&&j<=t.length){
        if(j==0 || s.ch[i]==t.ch[j]) {++i;++j;}
        else j= next[j];
    }

    if(j>t.length) return i-t.length;
    else return 0;
}


int main(){
    String s;
    char ch[] = "abaabcaba";
    s.ch = ch;
    s.length = 9;
    int next[s.length];
//    get_next(s,next);
//    for(int _i=0;_i<s.length;_i++)
//        std::cout<<next[_i]<<',';

    char t_ch[] = "abc";
    String t;t.ch = t_ch;t.length = 3;
    std::cout << index_kmp(s,t);
    return 0;
}