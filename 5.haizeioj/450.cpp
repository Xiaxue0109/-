/*************************************************************************
	> File Name: 450.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 19时57分39秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
