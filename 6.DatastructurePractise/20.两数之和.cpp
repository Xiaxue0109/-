/*************************************************************************
	> File Name: 20.两数之和.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月22日 星期六 17时32分58秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int  main() {
    int n, target;
    scanf("%d", &n);
    int *data = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", data + i);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (target - data[j] == data[i]){
                printf("%d %d\n", i + 1, j + 1); 
                break;
            }
        }
    }
    return 0;
}
