/*************************************************************************
	> File Name: 157.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 14时28分37秒
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
        for (int j = i; j < n; j++) {
            cout << (char)('A' + j);
        }
        for (int j = n - 1; j > i; j--) {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            cout << " ";
        }
        for (int j = i - 1; j < n; j++) {
            cout << (char)('A' + j);
        }
        for (int j = n - 1; j > i - 1; j--) {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}
