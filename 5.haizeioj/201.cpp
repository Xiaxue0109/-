/*************************************************************************
	> File Name: 201.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 22时45分28秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a < b;
}

int main() {
    int n, a[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    int cnt = unique(a, a + n) - a;
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        if(i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
