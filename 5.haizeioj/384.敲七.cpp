/*************************************************************************
	> File Name: 384.敲七.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月09日 星期三 14时10分50秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int is_seven(int a) {
    if (a % 7 == 0) return 1;
    while (a) {
        if (a % 10 == 7) return 1;
        a /= 10;
    }
    return 0;
}

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    queue<int> q;
    for (int i = x; i <= n; i++) {
        q.push(i);
    }
    for (int i = 1; i < x; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        if (is_seven(t) == 1) {
            q.pop();
        } else {
            q.push(q.front());
            q.pop();
        }
        t++;
    }
    cout << q.front() << endl;
    return 0;
}
