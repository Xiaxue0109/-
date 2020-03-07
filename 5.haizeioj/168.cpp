/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月17日 星期五 23时46分14秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string a[105];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i][0] >= 'a' && a[i][0] <= 'z') {
            a[i][0] -= 32; 
        }
        for (int j = 1; j < a[i].size(); j++) {
            if (a[i][j] >= 'A' && a[i][j] <= 'Z') {
                a[i][j] += 32;
            }
        }
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}
