/*************************************************************************
	> File Name: 209.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 17时20分48秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
bool cmp(double a, double b) {
    return a < b;
}
int main() {
    int n;
    double a[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
