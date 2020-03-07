/*************************************************************************
	> File Name: 454.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 20时37分52秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
int main () {
    int n, a[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = unique(a, a + n) - a;
    cout << l << endl;
    for (int i = 0; i < l; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
