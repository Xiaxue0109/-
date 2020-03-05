/*************************************************************************
	> File Name: 8.矩阵乘法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 23时58分26秒
 ************************************************************************/
#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int m, n, k, sum;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            sum = 0;
            for (int k = 0; k < n; ++k) {
                sum += a[i][k] * b[k][j];
            }
            printf("%d", sum);
            if (j != m - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
