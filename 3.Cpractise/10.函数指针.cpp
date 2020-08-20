/*************************************************************************
	> File Name: 10.函数指针.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月20日 星期四 20时06分52秒
 ************************************************************************/

#include <iostream>
using namespace std;

//int (*f1)(int) : 分别是返回值、函数、传参的类型
//函数指针方便解决分段函数

int fac1(int n) {
    if (n == 0) return 1;
    return n * fac1(n - 1);
}

int fac2(int n) {
    return (1 + n) * n / 2;
}

int g(int (*func)(int), int (*func2)(int), int x) {
    if (x < 6) return func(x);
    else return func2(x);
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("f(%d) = %d\n", n, g(fac1, fac2, n));
    }
    return 0;
}
