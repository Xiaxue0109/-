/*************************************************************************
	> File Name: 2.矩阵螺旋输出.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 22时24分51秒
 ************************************************************************/
// 是右、下、左、上，依次转圈
#include <stdio.h>

int main() {
    int a[100][100];
    int m, n;
	scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //定义方向数组
    int direct[4][2] = {
        {0,1}, {1, 0},
        {0, -1}, {-1, 0}
    };
    //(x, y)代表坐标，k代表方向，l代表圈数
    int x, y, k, l;
    x = y = l = k = 0;
    while (1) {
        if (x != 0 || y != 0) printf(" ");
        printf("%d", a[x][y]);
        if (direct[k][0] != 0) {
            if (x + direct[k][0] >= m - l || x + direct[k][0] <= l) {
                ++k;
                if (k == 4) {
                    k = 0;
                    ++l;
                	}
            	}
            } else {
                if (y + direct[k][1] >= n - l || y + direct[k][1] < l) {
                    ++k;
                }               
        	}
        x += direct[k][0];
        y += direct[k][1];
            if (direct[k][0] != 0 && (x >= m - l || x <= l)) break;
            if (direct[k][1] != 0 && (y >= n - l || y < l)) break;
    }
    return 0;
}
