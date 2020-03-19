/*************************************************************************
	> File Name: 406.深搜水坑.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 19时07分24秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, ans;
char mmap[2005][2005];
int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1};

void func(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] == '#') {
            mmap[tx][ty] = 0;
            func(tx, ty);
        }
    }
}

int main() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '#') {
                ans++;
                mmap[i][j] = 0;
                func(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
