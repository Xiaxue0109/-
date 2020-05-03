/*************************************************************************
	> File Name: 43.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月30日 星期四 18时34分39秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000

int f[MAX_N + 5][MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> f[i][j];
        }
    }
    //从下到上求解，知道下一层的值求上一层的值
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]);
        }
    }
    cout << f[1][1] << endl;
    return 0;
}
