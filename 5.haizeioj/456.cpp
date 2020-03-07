/*************************************************************************
	> File Name: 456.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 21时24分43秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[1000005];

int main() {
    int n, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i += 2) {
        if (a[i] != a[i + 1]) {
            cout << a[i] << endl;
            return 0;
        }
    }
    return 0;
}
