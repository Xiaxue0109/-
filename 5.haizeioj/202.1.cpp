/*************************************************************************
	> File Name: 202.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 13时00分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n, t, a[1005], b[1005];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp;
        int t = i;
        a[i] = t;
        cin >> temp;
        b[i] = temp;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - 1; j++) {
            if (b[j] <= b[j + 1]) continue;
            else {
                t = b[j]; b[j] = b[j + 1]; b[j + 1] = t; 
                t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << a[i];
    }
    return 0;
}
