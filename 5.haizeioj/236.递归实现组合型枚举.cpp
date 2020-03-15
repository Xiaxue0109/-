/*************************************************************************
	> File Name: 236.递归实现组合型枚举.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 19时37分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, num[15], cnt;

void func(int s, int left) {
    if (left == 0) {
        for (int i = 0; i < cnt; i++) {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
        return ;
    }
    for (int i = s; i <= n - left + 1; i++) {
        num[cnt] = i;
        cnt++;
        func(i + 1, left - 1);
        cnt--;
    }
}

int main() {
    cin >> n >> m;
    func(1, m);//起点，和要选的
    return 0;
}
