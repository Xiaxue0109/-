/*************************************************************************
	> File Name: 453.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 20时19分26秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, k, a[10005];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = unique(a, a + n) - a;
    /*for (int i = 0; i < l; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;*/
    cout << a[k - 1] << endl;
    return 0;
}
