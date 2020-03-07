/*************************************************************************
	> File Name: 211.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 22时13分47秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    return a < b;
}
int main() {
    int n; 
    string a[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        reverse(a[i].begin(), a[i].end());
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
