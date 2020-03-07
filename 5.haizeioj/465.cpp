/*************************************************************************
	> File Name: 465.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月09日 星期日 20时00分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

long long digit(long long n, long long k) {
    long long ans;
    while (k != 0) {
        ans = n % 10;
        n /= 10;
        k--;
    }
    return ans;
}

int main() {
    long long n, k;
    cin >> n >> k;
    cout << digit(n, k) << endl;
    return 0;
}
