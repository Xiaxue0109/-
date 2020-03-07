/*************************************************************************
	> File Name: 457.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月06日 星期四 14时08分51秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n, a[1005];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        a[i] = abs(a[i + 1] - a[i]);
    }
    sort(a, a + n - 1);
    int flag = 1;
    for (int i = 1; i < n; i++) {
        int t = i;
        if (a[t - 1] == t) continue;
        else flag = 0;
    }
    if (flag == 1) cout << "Jolly" << endl;
    else cout << "Not jolly" << endl;
    return 0;
}
