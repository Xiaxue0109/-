/*************************************************************************
	> File Name: 29.水仙花数.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月24日 星期四 16时47分56秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define swap(a, b) {\
    __typeof(a) __temp = a; a = b; b = __temp;\
}

int n, m, a, b, c, t, flag = 0;

int main() {
    while (scanf("%d %d", &m, &n) != EOF) {
        if (m > n) swap(m, n);
        if (m >= 100 && n <= 999) {
            for (int i = m; i <= n; i++) {
                a = i / 100;
                b = (i / 10) % 10;
                c = i % 10;
                if (i == pow(a, 3) + pow(b, 3) + pow(c, 3)) {
                    flag && cout << " ";
                    cout << i;
                    flag = 1;
                }
            }
            if (!flag) printf("no\n");
            else printf("\n");
            flag = 0;
        }
    }

    return 0;
}
