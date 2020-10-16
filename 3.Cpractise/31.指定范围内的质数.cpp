/*************************************************************************
	> File Name: 31.指定范围内的质数.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月26日 星期六 11时17分45秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX 1000000

int t, n, m;

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i != 0) {
            continue;
        }
    }
    return 1;
}

int main() {
    while (scanf("%d", &t) != EOF) {
        while (t--) {
            scanf("%d %d", &n, &m);
            
        }
    }

    return 0;
}
