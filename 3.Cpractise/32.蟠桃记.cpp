/*************************************************************************
	> File Name: 27.蟠桃记.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年10月16日 星期五 11时46分38秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n;

int f(int day, int sum) {
    if (day == 1) return sum;
    return f(day - 1, (sum + 1) * 2);
}

int main() {
    while (scanf("%d", &n) != EOF) {
        cout << f(n, 1) << endl;
    }

    return 0;
}
