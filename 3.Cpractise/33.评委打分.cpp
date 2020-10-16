/*************************************************************************
	> File Name: 33.评委打分.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年10月16日 星期五 16时43分39秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, x, m1 = 0, m2 = 0x3f3f3f3f, sum = 0, temp;

int main() {
    while (scanf("%d", &n) != EOF) {
        x = n;
        while (x--) {
            scanf("%d", &temp);
            sum += temp;
            if (temp > m1) { m1 = temp; }
            if (temp < m2) { m2 = temp; }
        }
        printf("%.2f\n", (sum - m1 - m2) * 1.0 / (n - 2));
        sum = 0; m1 = 0; m2 = 0x3f3f3f3f;
    }
    return 0;
}
