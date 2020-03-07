/*************************************************************************
	> File Name: 208.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 15时11分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int m, n, a[105] = {0};
    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        a[temp]++;
    }
    cin >> n;
    for (int i = 100; i >= 0; i--) {
        if (a[i] >= n) {
            cout << a[i] << endl;
            break;
        }
    }
    return 0;
}
