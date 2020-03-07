/*************************************************************************
	> File Name: 451.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 20时01分34秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int a[100005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
