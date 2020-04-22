/*************************************************************************
	> File Name: 48.完全背包.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月22日 星期三 19时45分44秒
 ************************************************************************/

#include <iostream>
using namespace std;

int all, n, w[105], v[105], ans[105][10005];

int main() {
    cin >> n >> all;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= all; j++) {
            if (j < w[i]) {
                //装不下
                ans[i][j] = ans[i - 1][j];
            } else {
                ans[i][j] = max(ans[i - 1][j], v[i] + ans[i][j - w[i]]);
            }
        }
    }
    cout << ans[n][all] << endl;

    return 0;
}
