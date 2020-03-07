/*************************************************************************
	> File Name: 455.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 20时48分34秒
 ************************************************************************/

#include<iostream>
#include <algorithm>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
using namespace std;
int main() {
    long long a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    int t = gcd(a[0], a[2]);
    cout << a[0] / t << "/" << a[2] / t << endl;
    return 0;
}
