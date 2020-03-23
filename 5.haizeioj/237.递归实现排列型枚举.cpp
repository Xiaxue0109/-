/*************************************************************************
	> File Name: 237.递归实现排列型枚举.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 19时56分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], cnt, mark[15];

void func(int left) {
    if (left == 0) {
        for (int i = 0; i < cnt; i++) {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (mark[i] == 0) {
            mark[i] = 1;
            num[cnt] = i;
            cnt++;
            func(left - 1);
            cnt--;
            mark[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    func(n);
    return 0;
}
