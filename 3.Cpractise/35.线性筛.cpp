/*************************************************************************
	> File Name: 35.线性筛.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年10月17日 星期六 00时31分57秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define max 100

int prime[max + 5] = {0};
int is_prime[max + 5] = {1, 1, 0};

void init() {
    for (int i = 2; i * 2 <= max; i++) {
        if(!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    init();
    for (int i = 0; i < prime[0]; i++) printf("%d ", prime[i]);
    cout << endl;
    for (int i = 0; i < 100; i++){
        if (is_prime[i] == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
