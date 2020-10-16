/*************************************************************************
	> File Name: 34.偶数求和.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年10月16日 星期五 19时32分00秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX 100
int n, m, i, j, x;

int main() {
    while (scanf("%d %d", &n, &m) != EOF) {
        for (i = 2, j = 1; j <= n; i += 2, j++) {
            x += i;
            if (j == n) {
                if (n % m == 0) printf("%d\n", x / m);
                else printf("%d\n", x / (n % m));
            } else if (j % m == 0) {
                printf("%d ", x / m);
                x = 0;
            }
        }
    }

    return 0;
}
