/*************************************************************************
	> File Name: 541.相遇.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月25日 星期三 19时11分14秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, m, atime[2][20][20], ans[2][100000], ans_num[2];

//locate表示我现在在哪 atime表示第一个是两个人，
//后边两个是二维数组，表示邻接矩阵，ans是计数器
//100000是2的14次方，看235题测试数据4，起点终点固定，中间可选可不选

void func(int people, int locate, int cost) {
    if (locate == n) {
        //当走到终点的时候记录一下，边长加一
        ans[people][ans_num[people]] = cost;
        ans_num[people]++;
        return ;
    }
    //只能往大数走，表示从当前位置往后走
    for (int i = locate + 1; i <= n; i++) {
        if (atime[people][locate][i]) {
            func(people, i, cost + atime[people][locate][i]);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        atime[0][a][b] = atime[0][b][a] = c;
        atime[1][a][b] = atime[1][b][a] = d;
    }
    func(0, 1, 0);
    func(1, 1, 0);
    sort(ans[0], ans[0] + ans_num[0]);
    sort(ans[1], ans[1] + ans_num[1]);
    for (int i = 0; i < ans_num[0]; i++) {
        for (int j = 0; j < ans_num[1]; j++) {
            if (ans[0][i] == ans[1][j]) {
                cout << ans[0][i] << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
