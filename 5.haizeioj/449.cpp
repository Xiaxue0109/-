/*************************************************************************
	> File Name: 449.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 00时17分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n, a[25][25];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a[i][1] = a[i][i] = 1;
    }
    for (int i = 3; i <= n; i++) {
        for (int j = 2; j <= i - 1; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a[i][j];
            if (j != i) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
