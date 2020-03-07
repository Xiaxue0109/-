/*************************************************************************
	> File Name: 214.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 23时06分56秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
bool cmp (int a, int b) {
    return a > b;
}

int main() {
    int n, a[35], k;
    double arv = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    sort(a, a + n, cmp);
    for (int i = 0; i < k; i++) {
        arv += a[i];
    }
    cout << fixed << setprecision(2) << arv / k << endl;
    return 0;
}
