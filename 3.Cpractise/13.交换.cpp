/*************************************************************************
	> File Name: 13.交换.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月23日 星期日 11时00分17秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define swap(a, b) { \
    __typeof(a) __temp = a; \
    a = b; b = __temp; \
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
