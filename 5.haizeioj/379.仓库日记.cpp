/*************************************************************************
	> File Name: 379.仓库日记.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月08日 星期二 17时26分11秒
 ************************************************************************/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    stack<int> sta1, sta2;
    int n, t, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == 0) {
            cin >> a;
            sta1.push(a);
            if (sta2.empty()) {
                sta2.push(a);
            } else {
                sta2.push(max(sta2.top(), a));
            }
        } else if (t == 1) {
            if (!sta2.empty()) {
                sta2.pop();
                sta1.top(); 
            }
        } else if (t == 2) {
            if (sta2.empty()) { 
                cout << 0 << endl; 
            } else { 
                cout << sta2.top() << endl; 
            }
        }
    }

    return 0;
}
