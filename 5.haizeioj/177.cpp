/*************************************************************************
	> File Name: 177.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月30日 星期四 20时14分08秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[30];
    cin >> s;
    int a = 0;
    int l = strlen(s);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            cout << s[a];
            a++;
            a %= l;
        }
        cout << endl;
        a += l - 2;
        a %= l;
    }
    return 0;
}
