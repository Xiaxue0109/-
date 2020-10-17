/*************************************************************************
	> File Name: 36.寻找子集.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年10月17日 星期六 17时27分35秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define max 15

int num[15];
int n, cnt = 0;

void output() {
    for (int i = 0; i < cnt; i++) {
        if (i) cout << " ";
        cout<< num[i];
    }
    cout << endl;
}

int f(int s) {
    for (int i = s; i <= n; i++) {
        num[cnt++] = i; //将数存进数组
        output();
        f(i + 1); //二叉数结构，选还是不选，继续向下递归寻找，一直到n就结束
        cnt--; //接着上部进行 回溯
    }
}

int main() {
    cin >> n;
    f(1);
    return 0;
}
