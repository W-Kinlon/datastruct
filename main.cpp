#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<double> jishu;
    jishu.push_back(1232134234523);
    for(int i=1;i<100;i++){
        auto n = jishu[i-1];
        jishu.push_back(0.5*(n+1/n));
    }
    return 0;
}
