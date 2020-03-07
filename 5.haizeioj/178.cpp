/*************************************************************************
	> File Name: 178.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 22时46分53秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

char s[5000000] = {'A'};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int l = strlen(s);
        for (int j = 0; j < l; j++) {
            s[2 * l - j] = s[j];
        }
        s[l] = 'A' + i;
    }
    cout << s << endl;
    return 0;
}
