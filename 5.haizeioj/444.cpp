/*************************************************************************
	> File Name: 444.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月09日 星期日 20时44分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n, x, a[105];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> x;
    int t = a[n];
    for (int i = n; i >= x + 1; i--) {
        a[i] = a[i - 1];
        a[x] = t; 
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
