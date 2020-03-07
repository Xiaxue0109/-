/*************************************************************************
	> File Name: 159.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 22时28分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    char s;
    cin >> s;
    for (int i = 0; i <= s - 'A'; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = s - 'A'; j >= i; j--) {
            cout << (char)(j - i + 'A');
        }
        for (int j = i; j < s - 'A'; j++) {
            cout << (char)('A' + j - i);
        }
        cout << endl;
    }

    return 0;
}
