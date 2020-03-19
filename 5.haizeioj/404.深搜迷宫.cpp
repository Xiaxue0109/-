/*************************************************************************
	> File Name: 404.深搜迷宫.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 19时27分24秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, sx, sy, ans = 1;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
char mmap[3005][3005];
int check[3005][3005];

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (tx < 1 || ty < 1 || tx > n || ty > m) {
            continue;//边界
        }
        if (mmap[tx][ty] != mmap[x][y] && check[tx][ty] == 0) {
            check[tx][ty] = 1;
            ans++;
            func(tx, ty);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> (&mmap[i][1]);
    }
    cin >> sx >> sy;
    check[sx][sy] = 1;
    func(sx, sy);
    cout << ans << endl;
    return 0;
}
