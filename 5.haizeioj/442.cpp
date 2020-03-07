/*************************************************************************
	> File Name: 442.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月08日 星期六 22时29分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a[35] = {0, 1, 2};
int f(int n) {
    if (n == 1) return a[n];
    if (n == 2) return a[n];
    else return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << f(i);
    }
    cout << endl;
    return 0;
}
