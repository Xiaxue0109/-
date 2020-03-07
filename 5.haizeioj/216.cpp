/*************************************************************************
	> File Name: 216.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 22时30分42秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b){
    return a < b;
}

int main() {
    int n;
    string a[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = a[i].substr(3);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
