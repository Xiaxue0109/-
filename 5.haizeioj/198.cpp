/*************************************************************************
	> File Name: 198.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 15时24分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000007

int main() {
    long long n, num[100005] = {0, 1, 1};
    cin >> n;
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= max;
    }
    cout << num[n] << endl;
    return 0;
}
