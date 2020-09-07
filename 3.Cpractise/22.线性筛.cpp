/*************************************************************************
	> File Name: 22.线性筛.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月07日 星期一 23时30分16秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <inttypes.h>
using namespace std;

typedef int32_t int1;

#define MAX_N 10000
int1 prime[MAX_N + 5] = {0};

int main() {
    for (int1 i = 2; i <= MAX_N; i++) {
        if (!prime[i]) { prime[++prime[0]] = i; }
        for (int1 j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    int1 n;
    while (scanf("%d", &n) != EOF) {
        printf("prime[n] = %d\n", prime[n]);
    }
    return 0;
}
