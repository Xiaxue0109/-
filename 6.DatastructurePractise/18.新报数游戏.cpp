/*************************************************************************
	> File Name: 18.新报数游戏.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月22日 星期六 23时32分57秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *data, int l, int r) {
    if (l == r) return ;
    int mid = (l + r) >> 1;
    merge_sort(data, l, mid);
    merge_sort(data, mid + 1, r);
    int *temp = (int *)malloc(sizeof(int) * (r - l + 1));
    int x = l, y = mid + 1, loc = 0;
    while (x <= mid || y <= r) {
        if (x <= mid && (y > r || data[x] <= data[y])) {
            temp[loc++] = data[x++];
        } else {
            temp[loc++] = data[y++];
        }
    }
    for (int i = l; i <= r; i++) {
        data[i] = temp[i - l];
    }
    free(temp);
    return ;
}

int search(int *data, int n, int value) {
    int x = 0, y = n - 1;
    int mid;
    while (x < y) {
        mid = (x + y + 1) >> 1;
        if (data[mid] == value) {
            return mid;
        } else if (data[mid] > value) {
            y = mid - 1;
        } else {
            x = mid;
        }
    }
    return x;
}


int main() {
    int n, m , q;
    scanf("%d %d", &n, &m);
    int *data = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", data + i);
    }
    merge_sort(data, 0, n - 1);
    while (m--) {
        scanf("%d", &q);
        printf("%d", data[search(data, n, q)]);
        if (m) {
            printf(" ");
        }
    }
    printf("\n");
    free(data);
    return 0;
}
