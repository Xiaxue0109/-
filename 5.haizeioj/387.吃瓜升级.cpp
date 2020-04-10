/*************************************************************************
	> File Name: 387.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月08日 星期三 20时04分27秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int num;
    int val;
};

bool cmp(node a, node b) {
    return a.val < b.val;
}

node w[100005];

int main() {
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> w[i].val;
        w[i].num = i + 1;
    }
    sort(w, w + n, cmp);
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (t > w[n - 1].val) {
            cout << 0 << endl;
            continue;
        }
        int l = 0, r = n - 1, mid;
        while (l != r) {
            mid = (l + r) / 2;
            if (w[mid].val >= t) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        cout << w[l].num << endl;
    }
    return 0;
}
