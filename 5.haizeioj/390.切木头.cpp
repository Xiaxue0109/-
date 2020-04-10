/*************************************************************************
	> File Name: 390.切木头.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月08日 星期三 20时34分06秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[100005], mmax;

int func(int len) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += num[i] / len;
    }
    return cnt;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        mmax = max(mmax, num[i]);
    }
    int l = 0, r = mmax;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = func(mid); //能切多少根
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << l << endl;
    return 0;
}
