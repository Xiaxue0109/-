/*************************************************************************
	> File Name: 217.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 23时00分11秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[100000];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    int t = floor(n / 2);
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[t]) cnt++;
    }
    cout << a[t] << " " << cnt << endl;
    return 0;
}
