/*************************************************************************
	> File Name: 1.矩阵旋转输出.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 19时21分48秒
 ************************************************************************/
#include <stdio.h>

int main() {
    int a[3][3];
    int n = 3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int first, last, temp, offset;
    for (int i = 0; i < n / 2; i++) {
        first = i;
        last = n - 1- first;
        for (int j = first; j < last; j++) {
            offset = j - first;
            temp = a[i][j];
            a[i][j] = a[last - offset][first];
            a[last - offset][first] = a[last][last - offset];
            a[last][last-offset] = a[i + offset][last];
            a[i + offset][last] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", a[i][0]);
        for (int j = 1; j < n; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
