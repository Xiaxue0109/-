/*************************************************************************
	> File Name: 210.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 21时47分41秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b){
    return a < b;
}

int main() {
    int n;
    string a[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i ++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
