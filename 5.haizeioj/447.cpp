/*************************************************************************
	> File Name: 447.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 15时21分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int num[13] = {4, 7, 47, 74, 444, 477, 447, 474, 744, 747, 774, 777};

int main() {
    int n, flag = 0;
    cin >> n;
    for (int i = 0; i < 13; i++) {
        if (n == num[i]) {
            flag = 1;
            cout << "YES" << endl;
            return 0;
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 13; j++) {
            if (i * num[j] <= 1000 && i * num[j] == n) {    
                flag = 1;
                cout << "YES" << endl;
                return 0;
            }
        } 
    }
    if (flag == 0) cout << "NO" << endl;
    return 0;
}
