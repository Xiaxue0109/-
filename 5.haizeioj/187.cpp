/*************************************************************************
	> File Name: 187.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 17时49分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

long long f1(long long n) {
    if (n == 1) return 1;
    return 2 * f1(n - 1) + 1;
}

long long f2(long long n) {
    if (n == 1) return 1;
    return 2 * f2(n - 1) + n;
}

int main() {
    int n; 
    cin >> n;
    cout << f1(n) << " " << f2(n) << endl;
    return 0;
}
