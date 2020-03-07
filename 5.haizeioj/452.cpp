/*************************************************************************
	> File Name: 452.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月05日 星期三 20时06分23秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, a[10005], cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
