/*************************************************************************
	> File Name: 235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 19时16分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
//cnt 是num的计数器，n是枚举上限
int n, num[15], cnt;

void p() {
    for (int i = 0; i < cnt; i++) {
        if (i) cout << " ";
        cout << num[i];
    }
    cout << endl;
}

void func(int s) {
    for (int i = s; i <= n; i++) {
        num[cnt++] = i;
        p();
        func(i + 1);
        cnt--;//回溯
    }
}

int main() {
    cin >> n;
    func(1);
    return 0;
}
