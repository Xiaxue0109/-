/*************************************************************************
	> File Name: 48.完全背包.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月22日 星期三 19时45分44秒
 ************************************************************************/

#include <iostream>
using namespace std;

int all, n, w[10005], v[10005], ans[10005];

int main() {
    cin >> n >> all;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= all; j++) {
            if (j >= w[i]) {
                ans[j] = max(ans[j], v[i] + ans[j - w[i]]);
            }
        }
    }
    cout << ans[all] << endl;

    return 0;
}
