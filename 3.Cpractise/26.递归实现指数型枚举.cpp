/*************************************************************************
	> File Name: 26.递归实现指数型枚举.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月20日 星期日 20时17分16秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, ans[15], cnt; 

void print() {
    for (int i = 0; i < cnt; i++) {
        if (i) cout << " " ;
        cout << ans[i];
    }
    cout << endl;
}

int f(int s) {
    for (int i = s; i <= n; i++) {
        ans[cnt] = i;
        cnt++;
        print();
        f(i + 1);
        cnt--;
    }
}

int main() {
    cin >> n;
    f(1);
    return 0;
}
