/*************************************************************************
	> File Name: 398.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月01日 星期三 18时51分15秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y, step;
};

int mmap[405][405];
int n, m, x, y;
int dir[8][2] = {
    1, 2, 1, -2, 2, 1, 2, -1,
    -1, 2, -1, -2, -2, 1,-2, -1
};

int main() {
    cin >> n >> m >> x >> y;
    mmap[x][y] = 0;
    queue<node> que;
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m) continue;
            if (mmap[x][y])
        }
    }
    return 0;
}
