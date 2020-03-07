/*************************************************************************
	> File Name: 466.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月09日 星期日 20时08分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int n) {
    int a, ans = 0;
    int t = n;
    while (t != 0) {
        a = t % 10;
        t /= 10;
        ans = ans * 10 + a;
    }
    if (n == ans) {
        return 1;
    } else {
        return 0;
    } 
}

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_val(i)) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
