/*************************************************************************
	> File Name: 25.快速幂.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月01日 星期二 21时42分25秒
 ************************************************************************/

#include <iostream>
using namespace std;

typedef long long ll;
/* 原版

ll NormalPower(ll base, ll power) {
    ll result = 1;
    for (int i = 1; i <= power; i++) {
        result = result * base;
        result = result % 1000;
    }
    return result % 1000;
}

*/

/*进阶版
ll FastPower(ll base, ll power) {
    ll result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = result * base % 1000; 
        }
        power /= 2;
        base = base * base % 1000;
    }
    return result;
}
*/

//最终版
ll FastPower(ll base, ll power) {
    ll result = 1;
    while (power > 0) {
        if (power & 1) {
            result = result * base % 1000; 
        }
        power >>= 1;
        base = (base * base) % 1000;
    }
    return result;
}

int main() {
    ll base, power;
    while (true) {
        cin >> base >> power;
        if (base == 0 && power == 0) break;
        cout << FastPower(base, power) << endl;
    }
    return 0;
}
