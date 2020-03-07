/*************************************************************************
	> File Name: 158.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 22时07分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << (n - i);
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << " ";
        }
        cout << (n - i);
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
    cout << 0 << endl;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << (n - i);
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << " ";
        }
        cout << (n - i);
        cout << endl;
    }
    return 0;
}
