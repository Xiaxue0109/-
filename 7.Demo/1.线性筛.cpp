/*************************************************************************
	> File Name: 1.线性筛.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月14日 星期六 13时52分29秒
 ************************************************************************/

#include <stdio.h>

#include <inttypes.h>

#define MAX_RANGE 10000 // 求出10000以内的素数
 
int32_t prime[MAX_RANGE + 5] = {0}; // 初始值为0，代表没有被标记成合数
 
int32_t main() {
    // i 枚举算法中的 M 值
    for (int32_t i = 2; i <= MAX_RANGE; i++) {
       // 如果找到素数，就把素数放到素数表中
        if (!prime[i]) { prime[++prime[0]] = i; }
        // 从小到大遍历素数表, prime[j] 为第 j 个素数
        for (int32_t j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_RANGE) break;
            prime[i * prime[j]] = 1; // 标记 i * prime[j] 为合数
            // i 能整除 prime[j]，说明 prime[j] == (i 中最小素数了)
            if (i % prime[j] == 0) break;     
		}
    }
    int32_t n;
    while (scanf("%d", &n) != EOF) {
        // 输出第 n 个素数
        printf("%d\n", prime[n]);
    }
    return 0;
}
