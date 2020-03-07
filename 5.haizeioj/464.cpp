/*************************************************************************
	> File Name: 464.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月09日 星期日 19时54分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int n) {
    if (n % 400 == 0 ||n % 4 == 0 && n % 100 != 0) {
        return 1;
    }
    return 0;
}

int main() {
    int x, y, ans;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (is_val(i)) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
