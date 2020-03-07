/*************************************************************************
	> File Name: 439.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 17时15分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    double x, n = 2.0, sum = 0;
    int cnt = 1;
    cin >> x;
    while (sum < x - 2) {
        n *= 0.98;
        sum += n;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
