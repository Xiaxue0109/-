/*************************************************************************
	> File Name: 441.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 18时03分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    long long x, n, sum = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        if (x == 6) {
            x++;
            i++;
        }
        if (x == 7) {
            x = 1;
            continue;
        }
        x++;
        sum += 2;
    }
    cout << sum << endl; 
    return 0;
}
