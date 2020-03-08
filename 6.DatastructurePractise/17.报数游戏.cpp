/*************************************************************************
	> File Name: 17.报数游戏.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月22日 星期六 13时00分55秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int search(int *data, int n, int value) {
    int x = 0, y = n - 1;
    while (x < y) {
        int mid = (x + y + 1) / 2;
        if (data[mid] == value) return mid;
        if (data[mid] > value) y = mid - 1;
        else x = mid;
    }
    return x;
}


int main() {
    int n, m, q;
    scanf("%d %d", &n, &m);
    int *data = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", data + i);
    }
    while (m--) {
        scanf("%d", &q);
        printf("%d", data[search(data, n, q)]);
        if (m) {
            printf(" ");
        }
    }
    free(data);
    return 0;
}
