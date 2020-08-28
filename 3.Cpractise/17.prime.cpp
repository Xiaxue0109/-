/*************************************************************************
	> File Name: 15.prime.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月26日 星期三 14时58分10秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000

/*
int prime[MAX_N + 5] = {0};

void init_prime() {
    prime[0] = 1, prime[1] = 1;
    for (int i = 2; i < MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}
*/

void init_prime() {}

int prime(int n) {
    if (n <= 1) return 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i) continue;
        return 1;
    }
    return 0;
} 

int main() {
    init_prime();
    int n;
    while (~scanf("%d", &n)) {
        //printf("%s\n", prime[n] ? "No" : "Yes");
        printf("%s\n", prime(n) ? "No" : "Yes");
    }
    return 0;
}
