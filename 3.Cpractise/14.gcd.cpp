/*************************************************************************
	> File Name: 14.gcd.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月23日 星期日 11时11分38秒
 ************************************************************************/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
