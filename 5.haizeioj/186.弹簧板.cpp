/*************************************************************************
	> File Name: 186.弹簧板.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 23时29分17秒
 ************************************************************************/

#include<iostream>
#define max 100005
using namespace std;

int n;
int a[max];

//x是次数，s是位置；
int solve(int x, int s) {
    if (s >= n) return x - 1;
    return solve(x + 1, s + a[s]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(1, 0) << endl;
    return 0;
}
