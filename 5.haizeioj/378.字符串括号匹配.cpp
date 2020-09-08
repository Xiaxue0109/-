/*************************************************************************
	> File Name: 378.字符串括号匹配.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月08日 星期二 16时49分19秒
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<char> sta;
    char str[305];
    cin >> str;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            sta.push(str[i]);
        }
        if (str[i] == ')') {
            if (sta.top() == '(') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (str[i] == '}') {
            if (sta.top() == '{') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (str[i] == ']') {
            if (sta.top() == '[') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if (sta.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
