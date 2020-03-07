/*************************************************************************
	> File Name: 440.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 17时36分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    long long n, x, a, t = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp != 0) {
            a = temp % 10;
            temp /= 10;
            if (a == x) t++;
        }
    }
    cout << t << endl;
    return 0;
}
