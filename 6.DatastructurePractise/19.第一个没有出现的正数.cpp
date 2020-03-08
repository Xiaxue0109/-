/*************************************************************************
	> File Name: 19.第一个没有出现的正数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月22日 星期六 13时46分57秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int *data = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        if (m <= 0 || m > n) continue;
        data[m] = 1;
    }
    m = n + 1;
    for (int i = 1; i <= n; i++) {
        if (data[i] == 0) {
            m = i;
            break;
        }
    }
    printf("%d\n", m);
    free(data);
    return 0;
}

