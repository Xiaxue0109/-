/*************************************************************************
	> File Name: 30.多项式求和.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月24日 星期四 17时40分59秒
 ************************************************************************/

#include <iostream>
using namespace std;

int m, n;
double sum;

double f(int n) {
    sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) sum += 1.0 / i;
        else sum -= 1.0 / i;
    }
    return sum;
}

int main() {
    while (scanf("%d", &m) != EOF) {
        while(m--) {
            scanf("%d", &n);
            printf("%.2lf\n", f(n));
        }
    }

    return 0;
}
