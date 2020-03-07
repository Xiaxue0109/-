/*************************************************************************
	> File Name: 197.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 14时56分57秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[1005];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    return 0;
}
