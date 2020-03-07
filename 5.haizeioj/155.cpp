/*************************************************************************
	> File Name: 155.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月30日 星期四 23时17分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n, a[35], sum = 3;
    a[1] = 3;
    cin >> n;
    cout << a[1] << endl;
    for (int i = 2; i <= n; i++) {
        int t = i;
        a[t] = a[t - 1] + (t - 1) * 2;
        cout << a[t] << endl;
        sum += a[t];
    }
    cout << sum << endl;
    return 0;
}
