/*************************************************************************
	> File Name: 391.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月13日 星期一 00时13分49秒
 ************************************************************************/

#include <iostream>
using namespace std;

long long n, m, num[100005], num_max, num_sum;

long long check(long long mid) {
    long long mmax = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (mmax + num[i] == mid) {
            cnt++;
            mmax = 0;
        } else if (mmax + num[i] > mid) {
            cnt++;
            mmax = num[i];
        } else {
            mmax += num[i];
        }
    }
    if (mmax > 0) cnt++;
    return cnt;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        num_sum += num[i];
        num_max = max(num_max, num[i]);
    }
    long long l = num_max, r = num_sum;
    while (l != r) {
        long long mid = (l + r) / 2;
        long long s = check(mid);
        if (s > m) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}
