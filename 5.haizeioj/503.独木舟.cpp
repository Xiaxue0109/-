/*************************************************************************
	> File Name: 503.独木舟.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 18时07分16秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 30000
int num[MAX_N + 5];

int main() {
    int w, n, ans = 0;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i--) {
        if (num[i] == 0) continue;
        for (int j = i - 1; j >= 0; j--) {
            if (num[j] && num[i] + num[j] <= w) {
                num[j] = 0;
                break;
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
