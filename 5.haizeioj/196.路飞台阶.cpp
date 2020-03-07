/*************************************************************************
	> File Name: 196.路飞台阶.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 00时08分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n;
int w[2] = {2, 3};

int f(int n) {
    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n == 4) return 1;
    return f(n - 2) + f(n - 3);
}


int main() {
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
