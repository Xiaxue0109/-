/*************************************************************************
	> File Name: 200.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 00时42分26秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 4.0 / 7;
    int a[35] = {4, 7};
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
        sum += 1.0 * a[i - 1] / a[i];
    }
    printf("%d/%d\n", a[n - 1], a[n]);
    printf("%.2lf\n", sum);
    return 0;
}
