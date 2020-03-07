/*************************************************************************
	> File Name: 156.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月30日 星期四 23时28分53秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;

int is_val(int n) {
    for (int i = 2; i < sqrt(10000); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int a[9] = {1, 4, 9, 16, 25, 36, 49, 64, 81};

int is_pow(int n) {
    for (int i = 0; i < 9; i++) {
        if (n == a[i]) return 1;
    }
    return 0;
}

int main() {
    int a, b, flag = 0, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int ab = i / 100;
        int cd = i % 100;
        if (is_val(i) && is_pow(ab) && is_pow(cd)){
            if (flag == 1) cout << " ";
            cout << i;
            cnt++;
            flag = 1;
        }
    }
    cout << endl << cnt << endl;
    return 0;
}
