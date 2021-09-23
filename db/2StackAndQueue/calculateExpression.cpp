//
// Created by Kinlon Wong on 2021/7/25.
//
#include "stack"
#include "queue"
#include "string"
#include "iostream"
using namespace std;

//操作符
bool isOperator(char c){
    return (42 <= int(c)) && (47 >= int(c));
}

//数字
bool isNumber(char c){
    return (48 <= int(c)) && (57 >= int(c));
//    return ((48 <= int(c)) && (57 >= int(c))) || ((97 <= int(c)) && (122 >= int(c))) ;
}

//左括号
bool isLeftBrcket(char c){
    return (c == '(') || (c == '[') || (c == '{');
}

//右括号
bool isRightBrcket(char c){
    return (c == ')') || (c == ']') || (c == '}');
}

//括号匹配
bool matchBracket(char c1,char c2){
    if((c1=='(' && c2==')')||(c1=='[' && c2==']')||(c1=='{' && c2=='}'))
        return true;
    return false;
}

//运算符优先
bool isHighOperator(char c1,char c2){
    return (c1=='*' || c1=='/')&&(c2=='+' || c2=='-');
}

//运算符落后
bool isLowOperator(char c2,char c1){
    return (c1=='*' || c1=='/')&&(c2=='+' || c2=='-');
}

//运算符同级
bool isEqualOperator(char c1,char c2){
    return !isHighOperator(c1,c2) && !isLowOperator(c1,c2);
}

float getRes(float a,char _operator,float b){
    if(_operator=='*')return a*b;
    if(_operator=='-')return a-b;
    if(_operator=='+')return a+b;
    if(_operator=='/')return a/b;
}



//获取后缀表达式
bool getBackExpression(string s,string &res){
    string temp;
    stack<char> _stack;
    for(int i=0;i<s.length();i++) {
        auto current_char = s[i];
//        cout << current_char << '\n';
        //数字 直接加入表达式
        if(isNumber(current_char))
            temp.push_back(current_char);
        else{
            //左括号入栈
            if(isLeftBrcket(current_char))
                _stack.push(current_char);
            //右括号 将与之匹配的左括号前的运算符加入表达式
            else if(isRightBrcket(current_char)){
                for(auto top = _stack.top(); !matchBracket(top, current_char); top = _stack.top()) {
                    _stack.pop();
                    temp.push_back(top);
                }
                _stack.pop();
            }
            /*运算符*
             * 1.优先级高于栈顶运算符(除右括号) 直接入栈
             * 2.不高于 */
            else if(isOperator(current_char)){
                if(_stack.empty())
                    _stack.push(current_char);
                else {
                    auto top = _stack.top();
                    //遍历至top为除左括号的第一个运算符
                    if(isLeftBrcket(top)){
                        queue<char> temp_queue;//用队列暂存右括号
                        for(auto _top=_stack.top();_top!=' ' && isLeftBrcket(_top) && !_stack.empty();_top = _stack.empty() ? ' ' : _stack.top()){
                            temp_queue.push(_top);
                            _stack.pop();
                        }
                        top = _stack.empty() ? ' ' : _stack.top();
                        //左括号入栈
                        while (!temp_queue.empty()) {
                            auto front = temp_queue.front();
                            _stack.push(front);
                            temp_queue.pop();
                        }
                    }
                    //优先
                    if (top==' ' || isHighOperator(current_char, top))
                        _stack.push(current_char);
                    //不优先
                    else {
                        //运算符高或者相同 时加入表达式 并出栈
                        for(;
                        top!=' ' && !isLeftBrcket(top) && (isHighOperator(top, current_char) || isEqualOperator(top, current_char)  && !_stack.empty());
                        top = _stack.empty() ? ' ' : _stack.top())
                        {
                            temp.push_back(top);
                            _stack.pop();
                        }
                        //将当前运算符入栈
                        _stack.push(current_char);
                    }
                }
            }

        }
    }
    //栈中所有剩余运算符加入表达式
    if(!_stack.empty()){
        while (!_stack.empty()){
            auto top = _stack.top();
            if(isLeftBrcket(top))
                return false;
            temp.push_back(top);
            _stack.pop();
        }
    }

    res = temp;
    return true;
}

float calculate(string str){
    stack<float> _stack;
    for(int i=0;i<str.length();i++){
        auto current_char = str[i];
        //数字直接入栈
        if(isNumber(current_char)){
            _stack.push((float) int(current_char)-48);
        }
        //运算符
        else{
            auto b = _stack.top();_stack.pop();
            auto a = _stack.top();_stack.pop();
            _stack.push(getRes(a,current_char,b));
        }
    }
    return _stack.top();
}

int main(){
    string str;
    cout << "表达式:";
    cin >> str;

    string back_expression;
    if(!getBackExpression(str,back_expression))
        cout << "输入有误";
    else {
        cout << "后缀表达式为：" << back_expression << '\n';
        cout << "结果：" << calculate(back_expression);
    }
}
