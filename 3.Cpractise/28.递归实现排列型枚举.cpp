/*************************************************************************
	> File Name: 28.递归实现排列型枚举.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月21日 星期一 22时14分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, arr[15], cnt, mark[15];

int f(int sum) {
    if (sum == 0) {
        for (int i = 0; i < cnt; i++) {
            i && cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (mark[i] == 0) {
            mark[i] = 1;
            arr[cnt] = i;
            cnt++;
            f(sum - 1);
            cnt--;
            mark[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    f(n);
    return 0;
}
