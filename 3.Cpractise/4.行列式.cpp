/*************************************************************************
	> File Name: 4.行列式.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 17时37分43秒
 ************************************************************************/
#include <stdio.h>

int calc_matrix(int[3][3], int);

int main() {
    int a[2][3][3];
    int i, j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%d", &a[0][i][j]);
        }
    }
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            scanf("%d", &a[1][i][j]);
        }
    }
    i = calc_matrix(a[0], 3);
    j = calc_matrix(a[1], 2);
    printf("%d\n", i < j ? j : i);
    return 0;
}

int calc_matrix(int arr[3][3], int n) {
    if (n == 2) {
        return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    }
    int k, sum, i, j;
    int x, y;
    sum = 0;
    for (i = 0; i < n; ++i) {
        x = 0, y = i, k = 1;
        for (j = 0; j < n; ++j) {
            k *= arr[x][y];
            x += 1; y += 1;
            y %= n;
        }
        sum += k;
    }
    for (i = 0; i < n; ++i) {
        x = 0, y = i, k = 1;
        for (j = 0; j < n; ++j) {
            k *= arr[x][y];
            x += 1; y -= 1;
            y = (y + n) % n;
        }
        sum -= k;
    }
    return sum;
}
