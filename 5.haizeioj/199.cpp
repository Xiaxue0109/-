/*************************************************************************
	> File Name: 199.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 14时32分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a[11];
int b[100005] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int f(int x) {
    return a[1] * b[x - 1] + a[2] * b[x - 2] +
           a[3] * b[x - 3] + a[4] * b[x - 4] +
           a[5] * b[x - 5] + a[6] * b[x - 6] +
           a[7] * b[x - 7] + a[8] * b[x - 8] +
           a[9] * b[x - 9] + a[10] * b[x - 10];
}

int main() {
    int k, m;
    cin >> k >> m;
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    for (int i = 10; i <= k; i++) {
        b[i] = f(i) % m; 
    }
    cout << b[k] << endl;
    return 0;
}
