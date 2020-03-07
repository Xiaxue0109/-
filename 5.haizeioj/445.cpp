/*************************************************************************
	> File Name: 445.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月08日 星期六 23时03分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n, a[1005] = {0}, b[1005] = {0}, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        int t1 = 0, t2 = 0;
        for (int j = 0; j < i; j++) {
            if (b[j] > a[i]) t1++;
        }
        for (int j = i; j < n; j++) {
            if (b[j] > a[i]) t2++;
        }
        if (t1 == t2) ans++;
    }
    cout << ans << endl;
    return 0;
}
