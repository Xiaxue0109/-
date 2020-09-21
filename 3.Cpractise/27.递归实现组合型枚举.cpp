/*************************************************************************
	> File Name: 27.递归实现组合型枚举.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月21日 星期一 21时38分29秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, cnt, arr[15];

int f(int s, int sum) { 
    //s是初始值, sum是窗口大小
    if (sum == 0) {
        for (int i = 0; i < cnt; i++) {
            i && cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return 0;
    }
    for (int i = s; i <= n; i++) {
        arr[cnt] = i;
        cnt++;
        f(i + 1, sum - 1);
        cnt--;
    }
}

int main() {
    cin >> n >> m;
    f(1, m);
    return 0;
}
