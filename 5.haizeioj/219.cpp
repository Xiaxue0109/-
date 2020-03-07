/*************************************************************************
	> File Name: 219.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 23时14分20秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, l1, r1, l2, r2, a[10005];
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a + l1 - 1, a + r1);
    sort(a + l2 - 1, a + r2, cmp);
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
