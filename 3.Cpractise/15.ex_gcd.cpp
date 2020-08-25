/*************************************************************************
	> File Name: 15.ex_gcd.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月25日 星期二 11时59分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

int ex_gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1, *y = 0; //出口
        return a;
    }
    int ret = ex_gcd(b, a % b, y, x);  // 回溯
    *y -= a / b * (*x);
    return ret;
}

int main() {
    int a, b, x, y;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a *x + b * y);
    }
    return 0;
}
