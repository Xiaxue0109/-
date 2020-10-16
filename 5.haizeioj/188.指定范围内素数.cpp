/*************************************************************************
	> File Name: 188.指定范围内素数.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年10月17日 星期六 00时15分16秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define max 1000000
int n, m;
int prime[max + 5] = {0};

void is_prime() {
    for (int i = 2; i * i < max; i++) {
        if (prime[i] == 0) {
            for (int j = 2; i * j <= max; j++) {
                prime[i * j] = 1;
            }
        }
    }
}

int main() {
    is_prime();
    cin >> n >> m;
    for (int i = m; i <= n; i++) {
        if (prime[i] == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
